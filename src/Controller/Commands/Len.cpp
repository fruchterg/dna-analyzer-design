#include "Len.h"
#include "../Auxiliaryfunctions.h"


bool Len::isValid(const Paramcommand& param)
{
    return param.getParam().size() == 2 &&  param.getParam()[1][0] == '#';
}


std::string Len::run(Iwriter &writer, Ireader& reader, dataDNA& containerDna, const Paramcommand& param)
{
    if(!isValid(param))
        throw std::invalid_argument("command not found");

    if(!containerDna.isexistId(castToSize(param.getParam()[1].substr(1))))
    {
        return "DNA not found";
    }

    size_t len = containerDna.findInIdMap(castToSize(param.getParam()[1].substr(1)))->getDna().length();

    return castToString(len);
}
