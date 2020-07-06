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


std::string Load::run(const Paramcommand&param)
{
    rawdna myfile(param.getParam()[1].c_str());
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
    dataDNA::getIdDNA().insert(std::pair<size_t, Dna*>(Dna::getId(),newdna));
    dataDNA::getNameDNA().insert(std::pair<std::string, size_t>(dnaName, Dna::getId()));


    return print();

}


std::string Load::print()const
{

    std::stringstream temp;
    temp<<dataDNA::getIdDNA()[Dna::getId()]->getId();
    std::string strId =temp.str();

    if(dataDNA::getIdDNA()[Dna::getId()]->getDna().length()<40)
    {
        return "[" + strId + "]" + dataDNA::getIdDNA()[Dna::getId()]->getName() + ":" +
                dataDNA::getIdDNA()[Dna::getId()]->getDna().getAsChar();
    }
    else
    {
        std::string lastDnasequence= (dataDNA::getIdDNA()[Dna::getId()]->getDna()).getAsChar()+dataDNA::getIdDNA()[Dna::getId()]->getDna().length()-3;
        std::string firstDnasequence(dataDNA::getIdDNA()[Dna::getId()]->getDna().getAsChar());
        firstDnasequence = firstDnasequence.substr(0,32);

        return "[" + strId + "]" + dataDNA::getIdDNA()[Dna::getId()]->getName() + ":" + firstDnasequence+"..."+lastDnasequence;

    }

}


