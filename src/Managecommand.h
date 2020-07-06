//
// Created by a on 7/5/20.
//

#ifndef DNDSEQUENCE_MANAGECOMMAND_H
#define DNDSEQUENCE_MANAGECOMMAND_H

#include "Icommand.h"
#include "Load.h"
class Managecommand{

public:
     static Icommand* createcommand(const Paramcommand& param);
};



#endif //DNDSEQUENCE_MANAGECOMMAND_H
