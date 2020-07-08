//
// Created by a on 7/6/20.
//

#include <sstream>
#include "Save.h"
#include "rawDnaWriter.h"

Save::Save(const Paramcommand& obj)
{

        if(!isValid(obj))
            throw std::invalid_argument("command not found");

}
bool Save::isValid(const Paramcommand& param)
{
    return ((2==param.getParam().size()||(param.getParam().size()==3&&(param.getParam()[2][0]=='@')))&&param.getParam()[1][0]=='#');
}
void Save::run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& param)
{
    std::string fileDnaName;

    std::string string = param.getParam()[1].substr(1);
    std::stringstream temp(string);
    size_t idDna;
    temp>> idDna;

    if(!containerDna.isexistId(idDna))
    {
        std::cout<<"id of DNA not found";
        return;
    }
    if(param.getParam().size()<3)
    {

        fileDnaName =containerDna.findInIdMap(idDna)->getName();

    }
    else
    {
        fileDnaName = param.getParam()[2].substr(1);;
    }

    rawDnaWriter myfile(fileDnaName);
    myfile.write(containerDna.findInIdMap(idDna)->getDna().getAsChar());

}
