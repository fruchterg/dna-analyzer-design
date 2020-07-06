//
// Created by a on 6/30/20.
//

#include <fstream>
#include <iostream>
#include "Ireader.h"





Consolereader::Consolereader()
{

    std::cout<<"> cmd >>>"<<std::endl;
    std::getline(std::cin, m_data,'\n');


}
std::string Consolereader::read()const
{
    return  m_data;
}
