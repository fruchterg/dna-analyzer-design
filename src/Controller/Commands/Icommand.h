//
// Created by a on 7/5/20.
//

#ifndef DNDSEQUENCE_ICOMMAND_H
#define DNDSEQUENCE_ICOMMAND_H

#include "Paramcommand.h"
#include "Model/dataDNA.h"
#include <string>

class Icommand{

public:
     virtual void run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& obj) = 0;

};

class Icreate:public Icommand{

};

class New:public Icreate{

public:
    New(const Paramcommand& obj);
    void run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& obj);

private:
   bool isValid(const Paramcommand& obj);
   void print(const Iwriter& writer, dataDNA& containerDna);

};



#endif //DNDSEQUENCE_ICOMMAND_H
