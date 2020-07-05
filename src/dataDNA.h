//
// Created by a on 7/5/20.
//

#ifndef DNDSEQUENCE_DATADNA_H
#define DNDSEQUENCE_DATADNA_H

#include <map>
#include "Dna.h"
#include "IdDna.h"
#include "NameDna.h"
#include "StatusDna.h"
class dataDNA {

public:
    static std::map<IdDna,Dna> getIdDNA();
    static std::map<NameDna ,Dna&> getNameDNA();
    static std::map<StatusDna,Dna> getStatusDNA();


};


#endif //DNDSEQUENCE_DATADNA_H
