//
// Created by a on 7/7/20.
//

#ifndef DNDSEQUENCE_DUP_H
#define DNDSEQUENCE_DUP_H

#include "Icommand.h"

class Dup:public Icommand {
public:
    Dup(const Paramcommand& obj);
    void run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& obj);

private:
    bool isValid(const Paramcommand& obj);
    void print(const Iwriter& writer, dataDNA& containerDna);


};


#endif //DNDSEQUENCE_DUP_H
