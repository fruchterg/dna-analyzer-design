//
// Created by a on 7/5/20.
//

#include <stdexcept>
#include <sstream>
#include "Icommand.h"
#include "dataDNA.h"


New::New(const Paramcommand& paramlist)
{
    if(!isValid(paramlist))
        throw std::invalid_argument("command not found");


}


bool New::isValid(const Paramcommand& param)
{
    return true;
}


void New::run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& param)
{
    static size_t countId=1;
    std::stringstream temp;
    std::string dnaName;


    if(param.getParam().size()<3)
    {
        temp<<"seq"<<countId++;
        dnaName =temp.str();

    }
    else
    {
        dnaName = param.getParam()[2];
    }
    Dna* newdna = new Dna(dnaName, "new",param.getParam()[1]);
    containerDna.addDna(newdna);
   // dataDNA::getIdDNA().insert(std::pair<size_t, Dna*>(Dna::getId(),d));
   // dataDNA::getNameDNA().insert(std::pair<std::string, size_t>(dnaName, Dna::getId()));
    print(writer,containerDna);

}
void New::print(const Iwriter& writer, dataDNA& containerDna)
{
    std::stringstream temp1;
    temp1<<containerDna.getMap()[Dna::getId()]->getId();
    std::string strId1 =temp1.str();
    writer.write("[" +strId1+ "]"+ containerDna.getMap()[Dna::getId()]->getName()+":"+containerDna.getMap()[Dna::getId()]->getDna().getAsChar());

}

