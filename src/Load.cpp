//
// Created by a on 7/6/20.
//

#include <stdexcept>
#include <sstream>
#include "Load.h"
#include "rawdna.h"

bool Load::isValid(const Paramcommand& obj)
{
    return true;
}

Load::Load(const Paramcommand& param)
{
    if(!isValid(param))
        throw std::invalid_argument("command not found");

}


void Load::run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& param)
{
    rawdna myfile(param.getParam()[1]);
    myfile.read();
    std::string dnaName;

    if(param.getParam().size()<3)
    {
        dnaName = param.getParam()[1];
    }
    else
    {
        dnaName = param.getParam()[2];

    }

    Dna* newdna = new Dna(dnaName,"new",myfile);
    containerDna.addDna(newdna);
    print(writer,containerDna);

}


void Load::print(const Iwriter& writer, dataDNA& containerDna)const
{

    std::stringstream temp;
    temp<<containerDna.getMap()[Dna::getId()]->getId();
    std::string strId =temp.str();



    if(containerDna.getMap()[Dna::getId()]->getDna().length()<40)
    {
        writer.write("[" + strId + "]" + containerDna.getMap()[Dna::getId()]->getName() + ":" +
                             containerDna.getMap()[Dna::getId()]->getDna().getAsChar());
    }
    else
    {
        std::string lastDnasequence= (containerDna.getMap()[Dna::getId()]->getDna()).getAsChar()+containerDna.getMap()[Dna::getId()]->getDna().length()-3;
        std::string firstDnasequence(containerDna.getMap()[Dna::getId()]->getDna().getAsChar());
        firstDnasequence = firstDnasequence.substr(0,32);
        writer.write("[" + strId + "]" + containerDna.getMap()[Dna::getId()]->getName() + ":" + firstDnasequence+"..."+lastDnasequence);

    }

}


