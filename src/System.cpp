//
// Created by a on 7/5/20.
//

#include "System.h"
#include "Iwriter.h"
#include "Ireader.h"
#include "dataDNA.h"
#include "Terminal.h"
void System::start(const Iwriter& writer, Ireader& reader)
{
    dataDNA containerDna;
    Terminal Terminal;
    Terminal.start(writer,reader,containerDna);

}
