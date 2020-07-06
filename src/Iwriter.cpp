//
// Created by a on 6/30/20.
//

#include "Iwriter.h"
#include <iostream>
#include <fstream>

Filewriter::Filewriter(std::string data)
{
        m_data = data;
}


void Filewriter::write(const char* data)const{
    std::ofstream myfile;
    myfile.open(m_data.c_str());
    myfile << data;
    myfile.close();
}
void Consolewriter::write( const char* data)const
{
    std::cout<<data<<std::endl;
}
