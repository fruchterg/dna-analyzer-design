//
// Created by a on 7/7/20.
//

#include <sstream>
#include "Dup.h"
Dup::Dup(const Paramcommand& obj)
{
    if(!isValid(obj))
    {
        throw std::invalid_argument("command not found");

    }

}
bool Dup::isValid(const Paramcommand& obj)
{
    return true;
}

void Dup::run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& param)
{
    static size_t countId=1;
    std::stringstream temp;
    std::string dnaName;

    std::string string = param.getParam()[1].substr(1);
    std::stringstream temp2(string);
    size_t idDna;
    temp2>> idDna;

    if(param.getParam().size()<3)
    {
        temp<<"_"<<countId++;
        dnaName =containerDna.find(idDna)->getName()+temp.str();

    }
    else

    {
        dnaName = param.getParam()[2];
    }

    Dna* newdna = new Dna(dnaName, "new",containerDna.find(idDna)->getDna());
    containerDna.addDna(newdna);
    print(writer,containerDna);

}

void Dup::print(const Iwriter& writer, dataDNA& containerDna)
{
    std::stringstream temp1;
    temp1<<containerDna.getMap()[Dna::getId()]->getId();
    std::string strId1 =temp1.str();

    writer.write("[" +strId1+ "]"+ containerDna.find(Dna::getId())->getName()+":"+containerDna.find(Dna::getId())->getDna().getAsChar());

}
