//
// Created by a on 7/5/20.
//

#include "System.h"
#include "Iwriter.h"
#include "Ireader.h"
#include "Paramcommand.h"
#include "Managecommand.h"
void System::start()
{

    while (1){


       Consolereader reader;

       Consolewriter writer;

       Paramcommand parameter(reader.read());
       Icommand *command = Managecommand::createcommand(parameter);
        std::string a =  command->run(parameter);
        //std::cout<<a;
       writer.write(a);

    }
}
