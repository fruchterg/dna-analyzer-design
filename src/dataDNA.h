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
    void addDna( Dna* newDna);
     std::map<size_t ,Dna*>& getMap();
     Dna*find(size_t);
private:
     std::map<size_t ,Dna*> m_mapIdDna;
     std::map<std::string ,size_t> m_mapNameDna;


};


#endif //DNDSEQUENCE_DATADNA_H
