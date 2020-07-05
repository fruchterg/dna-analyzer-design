//
// Created by a on 7/5/20.
//

#include "dataDNA.h"
static std::map<IdDna,Dna> getIdDNA()
{
    static std::map<IdDna,Dna> m_mId;
    return m_mId;
}
static std::map<NameDna ,Dna&> getNameDNA()
{
    static std::map<NameDna,Dna&> m_mName;
    return  m_mName;
}
static std::map<StatusDna,Dna&> getStatusDNA()
{
    static std::map<StatusDna,Dna&> m_mStatus;
    return m_mStatus;
}