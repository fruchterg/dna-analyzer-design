//
// Created by a on 7/6/20.
//

#include <stdexcept>
#include <sstream>
#include "Load.h"
#include "rawDnaReader.h"

bool Load::isValid(const Paramcommand& param)
{
    return ((2==param.getParam().size()||(param.getParam().size()==3&&(param.getParam()[2][0]=='@'))));
}

Load::Load(const Paramcommand& param)
{
    if(!isValid(param))
        throw std::invalid_argument("command not found");

}


void Load::run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& param)
{
    rawDnaReader myfile(param.getParam()[1]);
    myfile.read();
    std::string dnaName;
    std::stringstream temp;

    if(param.getParam().size()<3)
    {
        dnaName = param.getParam()[1];
    }
    else
    {
        dnaName = param.getParam()[2].substr(1);;

    }
    if(containerDna.isexistName(dnaName))
    {
        temp<<containerDna.findInNameMap(dnaName)->getCountName();
        containerDna.findInNameMap(dnaName)->setCountName();
        dnaName = dnaName+"_"+temp.str();
    }
    Dna* newdna = new Dna(dnaName,"new",myfile);
    containerDna.addDna(newdna);
    print(writer,containerDna);

}


void Load::print(const Iwriter& writer, dataDNA& containerDna)const
{

    std::stringstream temp;
    temp<<containerDna.findInIdMap(Dna::getId())->getId();
    std::string strId =temp.str();



    if(containerDna.findInIdMap(Dna::getId())->getDna().length()<40)
    {
        writer.write("[" + strId + "]" + containerDna.findInIdMap(Dna::getId())->getName() + ":" +
                             containerDna.findInIdMap(Dna::getId())->getDna().getAsChar());
    }
    else
    {
        std::string lastDnasequence= (containerDna.findInIdMap(Dna::getId())->getDna()).getAsChar()+containerDna.findInIdMap(Dna::getId())->getDna().length()-3;
        std::string firstDnasequence(containerDna.findInIdMap(Dna::getId())->getDna().getAsChar());
        firstDnasequence = firstDnasequence.substr(0,32);
        writer.write("[" + strId + "]" + containerDna.findInIdMap(Dna::getId())->getName() + ":" + firstDnasequence+"..."+lastDnasequence);

    }

}


