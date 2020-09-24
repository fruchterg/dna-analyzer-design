//
// Created by a on 7/5/20.
//
#include "Controller/System.h"
#include "View/Terminal.h"


int main()
{
    Consolewriter writer;
    Consolereader reader;
    System program;
    Terminal terminal;
    writer.setColor("\033[1;31m\033[0m");
    program.turnUp(writer);
    program.start(writer,reader,terminal);
    writer.setColor("\033[1;31m\033[0m");
    program.shutDown(writer);
    return 0;
}
