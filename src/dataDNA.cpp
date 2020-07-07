//
// Created by a on 7/5/20.
//

#include "dataDNA.h"
/*std::map<size_t ,Dna*>& dataDNA::getIdDNA()
{
    static std::map<size_t ,Dna*> m_mId;
    return m_mId;
}
 std::map<std::string ,size_t>& dataDNA::getNameDNA()
{
    static std::map<std::string,size_t> m_mName;
    return  m_mName;
}*/

//////function dataDna///////////////
void dataDNA::addDna(Dna* newDna)
{
    m_mapIdDna.insert(std::pair<size_t, Dna*>(Dna::getId(),newDna));
    m_mapNameDna.insert(std::pair<std::string, size_t>(newDna->getName(), Dna::getId()));

}

std::map<size_t ,Dna*>& dataDNA::getMap()
{
    return m_mapIdDna;
}

Dna*dataDNA::find(size_t id)
{
    return m_mapIdDna[id];
}



/*std::map<StatusDna,Dna&> dataDNA::getStatusDNA()
{
    static std::map<StatusDna,Dna&> m_mStatus;
    return m_mStatus;
}*/