//
// Created by a on 7/5/20.
//

#include "System.h"
#include "View/Iwriter.h"
#include "View/Ireader.h"
#include "Model/dataDNA.h"
#include "Terminal.h"
void System::start(const Iwriter& writer, Ireader& reader)
{
    dataDNA containerDna;
    Terminal Terminal;
    Terminal.start(writer,reader,containerDna);

}
