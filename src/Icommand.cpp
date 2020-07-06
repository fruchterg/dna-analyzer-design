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


std::string New::run(const Paramcommand& param)
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
    Dna* d = new Dna(dnaName, "new",param.getParam()[1]);
    dataDNA::getIdDNA().insert(std::pair<size_t, Dna*>(Dna::getId(),d));
    dataDNA::getNameDNA().insert(std::pair<std::string, size_t>(dnaName, Dna::getId()));

    std::stringstream temp1;
    temp1<<dataDNA::getIdDNA()[Dna::getId()]->getId();
    std::string strId1 =temp1.str();
    std::string g = dataDNA::getIdDNA()[Dna::getId()]->getName();
    std::string f = dataDNA::getIdDNA()[Dna::getId()]->getDna().getAsChar();
    std::string s = "[" +strId1+ "]"+ g+":"+f;
    return s;
}
