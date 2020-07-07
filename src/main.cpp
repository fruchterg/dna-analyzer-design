//
// Created by a on 7/5/20.
//
#include "System.h"
#include "Iwriter.h"
#include "Ireader.h"

int main()
{
    Consolewriter writer;
    Consolereader reader;
    System program;
    program.start(writer,reader);

    return 0;
}
