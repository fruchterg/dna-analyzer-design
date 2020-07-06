//
// Created by a on 7/5/20.
//

#include <stdexcept>
#include <sstream>
#include "Icommand.h"
#include "dataDNA.h"
#include <sstream>
size_t New::m_id = 1;
New::New(const Paramcommand& paramlist)
{
    if(!isValid(paramlist))
        throw std::invalid_argument("command not found");
    m_id++;
}
bool New::isValid(const Paramcommand& param)
{
    return true;
}
const char* New::run(const Paramcommand& param)
{
    std::stringstream temp;
    temp>>m_id;
    std::string strId =temp.str();
    if(param.getParam().size()<3)
    {
        dataDNA::getIdDNA().insert(std::pair<size_t,Dna>(Dna::getId(),Dna((std::string)"seq"+strId,"new",param.getParam()[1])));
    }
    dataDNA::getIdDNA().insert(std::pair<size_t,Dna>(Dna::getId(),Dna(param.getParam()[2],"new",param.getParam()[1])));
    dataDNA::getNameDNA().insert(std::pair<std::string,size_t>(param.getParam()[2],Dna::getId()));
    std::string str = "["+strId+"]"+ dataDNA::getIdDNA()[Dna::getId()].getName()+":"+ param.getParam()[1];
    return str.c_str();

}
