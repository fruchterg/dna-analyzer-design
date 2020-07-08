//
// Created by a on 7/7/20.
//

#include <sstream>
#include "Dup.h"
#include "Auxiliaryfunctions.h"
Dup::Dup(const Paramcommand& obj)
{
    if(!isValid(obj))
    {
        throw std::invalid_argument("command not found");

    }

}
bool Dup::isValid(const Paramcommand& param)
{
    return ((2==param.getParam().size()||(param.getParam().size()==3&&(param.getParam()[2][0]=='@')))&&param.getParam()[1][0]=='#');
}

void Dup::run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& param)
{
    static size_t countId=1;
    std::string dnaName;
    std::stringstream temp2;
    std::stringstream temp;

    std::string string = param.getParam()[1].substr(1);
    std::stringstream temp1(string);
    size_t idDna;
    temp1>> idDna;

    if(!containerDna.isexistId(idDna))
    {
        std::cout<<"id of DNA not found";
        return;
    }

    if(param.getParam().size()<3)
     {

        dnaName = containerDna.findInIdMap(idDna)->getName()+"_"+castToSize(containerDna.findInIdMap(idDna)->getCountName());
        containerDna.findInIdMap(idDna)->setCountName();
        while(containerDna.isexistName(dnaName))
        {
            dnaName = containerDna.findInIdMap(idDna)->getName()+"_"+castToSize(containerDna.findInIdMap(idDna)->getCountName());
            containerDna.findInIdMap(idDna)->setCountName();
        }
        /*temp2<<
        containerDna.findInIdMap(idDna)->setCountName();
        dnaName =containerDna.findInIdMap(idDna)->getName()+"_"+temp2.str();*/
     }
     else
     {
            dnaName = param.getParam()[2].substr(1);;
     }
      if(containerDna.isexistName(dnaName))
        {
             //std::cout<<"This name already Exists"<<std::endl;
             writer.write("This name already Exists");
             return;
        }

    Dna* newdna = new Dna(dnaName, "new",containerDna.findInIdMap(idDna)->getDna());
    containerDna.addDna(newdna);
    print(writer,containerDna);

}

void Dup::print(const Iwriter& writer, dataDNA& containerDna)
{
    std::stringstream temp1;
    temp1<<containerDna.findInIdMap(Dna::getId())->getId();
    std::string strId1 =temp1.str();

    writer.write("[" +strId1+ "]"+ containerDna.findInIdMap(Dna::getId())->getName()+":"+containerDna.findInIdMap(Dna::getId())->getDna().getAsChar());

}
