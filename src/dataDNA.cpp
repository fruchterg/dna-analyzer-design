//
// Created by a on 7/5/20.
//

#include "dataDNA.h"
std::map<size_t ,Dna*> dataDNA::getIdDNA()
{
    static std::map<size_t ,Dna*> m_mId;
    return m_mId;
}
 std::map<std::string ,size_t> dataDNA::getNameDNA()
{
    static std::map<std::string,size_t> m_mName;
    return  m_mName;
}

/*std::map<StatusDna,Dna&> dataDNA::getStatusDNA()
{
    static std::map<StatusDna,Dna&> m_mStatus;
    return m_mStatus;
}*/