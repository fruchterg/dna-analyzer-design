//
// Created by a on 7/5/20.
//

#ifndef DNDSEQUENCE_SYSTEM_H
#define DNDSEQUENCE_SYSTEM_H


#include "Iwriter.h"
#include "Ireader.h"

class System {

public:
    void start(const Iwriter& writer, Ireader& reader);

};


#endif //DNDSEQUENCE_SYSTEM_H
