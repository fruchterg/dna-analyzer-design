//
// Created by a on 7/5/20.
//

#include "Dna.h"

#include <utility>
size_t Dna::m_id = 0;
Dna::Dna( const std::string&  name, const std::string&  status, const std::string& dnasequence):m_Dna(dnasequence),m_name(name),m_status(status)
{
    ++m_id;
}


