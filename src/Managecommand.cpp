//
// Created by a on 7/5/20.
//

#include "Managecommand.h"

Icommand* Managecommand::createcommand(const Paramcommand& param)
{

    Icommand* command = new New(param);
        return command;

}
