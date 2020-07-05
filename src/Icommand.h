//
// Created by a on 7/5/20.
//

#ifndef DNDSEQUENCE_ICOMMAND_H
#define DNDSEQUENCE_ICOMMAND_H

#include "Paramcommand.h"
#include "dataDNA.h"
#include <string>

class Icommand{
public:
    std::string virtual run() = 0;
private:
    dataDNA* m_datadna;

};

class Icreate:public Icommand{
public:

};

class New:public Icreate{
public:
    New(const Paramcommand& obj);
    const char* run(const Paramcommand& obj);

private:
   static size_t m_id;
   bool isValid(const Paramcommand& obj);
};



#endif //DNDSEQUENCE_ICOMMAND_H
