//
// Created by a on 7/7/20.
//

#include "Terminal.h"
#include "Paramcommand.h"
#include "Managecommand.h"
void Terminal::start(const Iwriter& writer,Ireader& reader,dataDNA &containerDna)
{

    while (1) {
        reader.read();
        Paramcommand parameter(reader.get());
        Icommand *command = Managecommand::createcommand(parameter);
        command->run(writer,containerDna, parameter);
    }
}