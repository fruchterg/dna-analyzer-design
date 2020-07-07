//
// Created by a on 7/5/20.
//

#ifndef DNDSEQUENCE_DNA_H
#define DNDSEQUENCE_DNA_H


#include <string>
#include "dnasequence.h"
#include "StatusDna.h"
class Dna {
public:
    Dna(const std::string&  name, const std::string&  status, const Dnasequence& dnasequence);
    static size_t getId();
     std::string getName();
     Dnasequence getDna();

private:
    Dnasequence m_Dna;
    std::string m_name;
    StatusDna m_status;
    static size_t m_id;

};
inline size_t Dna::getId()
{
    return m_id;
}
inline std::string Dna::getName()
{
    return m_name;
}
inline Dnasequence Dna::getDna()
{
    return m_Dna;
}

#endif //DNDSEQUENCE_DNA_H
