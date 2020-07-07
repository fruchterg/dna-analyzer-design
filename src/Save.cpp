//
// Created by a on 7/6/20.
//

#include <sstream>
#include "Save.h"
#include "rawDnaWriter.h"

Save::Save(const Paramcommand& obj)
{

}
bool Save::isValid(const Paramcommand& obj)
{
    return true;
}
void Save::run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& param)
{
    std::string fileDnaName;

    std::string string = param.getParam()[1].substr(1);
    std::stringstream temp(string);
    size_t idDna;
    temp>> idDna;

    if(param.getParam().size()<3)
    {
        fileDnaName =containerDna.find(idDna)->getName();

    }
    else
    {
        fileDnaName = param.getParam()[2];
    }

    rawDnaWriter myfile(fileDnaName);
    myfile.write(containerDna.find(idDna)->getDna().getAsChar());

}
