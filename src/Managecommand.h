//
// Created by a on 7/5/20.
//

#ifndef DNDSEQUENCE_MANAGECOMMAND_H
#define DNDSEQUENCE_MANAGECOMMAND_H

#include "Controller/Icommand.h"
#include "Controller/Commands/Load.h"
#include "Controller/Commands/Dup.h"
#include "Controller/Commands/Save.h"
class Managecommand{

public:
     static Icommand* createcommand(const Paramcommand& param);
};



#endif //DNDSEQUENCE_MANAGECOMMAND_H
