//
// Created by a on 7/5/20.
//

#include "Managecommand.h"
//#include <string.h>
Icommand* Managecommand::createcommand(const Paramcommand& param)
{

        if(param.getParam()[0]=="new")
        {
            Icommand* command = new New(param);
            return command;
        }
        else if(param.getParam()[0]=="load")
        {
            Icommand* command = new Load(param);
            return command;
        }
        else if(param.getParam()[0]=="dup")
        {
            Icommand* command = new Dup(param);
            return command;
        }
        else if(param.getParam()[0]=="save")
        {
            Icommand* command = new Save(param);
            return command;
        }
        return  NULL;

}
