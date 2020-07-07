//
// Created by a on 7/6/20.
//

#ifndef DNDSEQUENCE_SAVE_H
#define DNDSEQUENCE_SAVE_H

#include "ImanageDna.h"

class Save: public ImanageDna{

public:
    Save(const Paramcommand& obj);
    void run(const Iwriter& writer, dataDNA& containerDna,const Paramcommand& obj);

private:
    bool isValid(const Paramcommand& obj);
    //void print(const Iwriter& writer, dataDNA& containerDna);

};


#endif //DNDSEQUENCE_SAVE_H
