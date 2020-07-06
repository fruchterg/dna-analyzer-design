//
// Created by a on 7/5/20.
//

#ifndef DNDSEQUENCE_ICOMMAND_H
#define DNDSEQUENCE_ICOMMAND_H

#include "Paramcommand.h"
#include "dataDNA.h"
#include <string>

class Icommand{
public:
     virtual std::string run(const Paramcommand& obj) = 0;

};

class Icreate:public Icommand{

};

class New:public Icreate{

public:
    New(const Paramcommand& obj);
    std::string run(const Paramcommand& obj);

private:
   bool isValid(const Paramcommand& obj);

};



#endif //DNDSEQUENCE_ICOMMAND_H
