//
// Created by a on 7/5/20.
//

#include <stdexcept>
#include "Icommand.h"
#include "dataDNA.h"
size_t New::m_id = 1;
New::New(const Paramcommand& paramlist)
{
    if(!isValid(paramlist))
        throw std::invalid_argument("command not found");

}
bool New::isValid(const Paramcommand& param)
{
    return true;
}
const char* New::run(const Paramcommand& param)
{
    if(param.getParam().size()<3)
    {
        dataDNA::getdataDNA().push_back(Dna("seq","new",param.getParam()[1]));


    }
    dataDNA::getdataDNA().push_back(Dna(param.getParam()[2],"new",param.getParam()[1]));

}
