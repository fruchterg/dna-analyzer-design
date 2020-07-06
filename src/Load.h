//
// Created by a on 7/6/20.
//

#ifndef DNDSEQUENCE_LOAD_H
#define DNDSEQUENCE_LOAD_H


#include "Paramcommand.h"
#include "Icommand.h"
class Load:public Icreate {

public:

    Load(const Paramcommand& param);
    std::string run(const Paramcommand&param);

private:

    bool isValid(const Paramcommand& obj);
    std::string print()const;

};


#endif //DNDSEQUENCE_LOAD_H
