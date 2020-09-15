//
// Created by a on 7/5/20.
//
#include "System.h"
#include "View/Iwriter.h"
#include "View/Ireader.h"

int main()
{
    Consolewriter writer;
    Consolereader reader;
    System program;
    program.start(writer,reader);

    return 0;
}
