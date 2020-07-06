//
// Created by a on 7/6/20.
//

#ifndef DNDSEQUENCE_RAWDNA_H
#define DNDSEQUENCE_RAWDNA_H

#include "Icommand.h"

class rawdna: public Filereader {

public:

    rawdna(const char *name_file);
    std::string read()const;
};


#endif //DNDSEQUENCE_RAWDNA_H
