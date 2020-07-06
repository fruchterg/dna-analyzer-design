//
// Created by a on 6/30/20.
//

#include <fstream>
#include <iostream>
#include "Ireader.h"
////////files/////////


Filereader::Filereader(const char* name_file)
{
    std::ifstream myfile(name_file);
    if(myfile.is_open())
    {
        getline(myfile,m_data);
    }
    else{
        throw std::ios_base::failure("faild open file");
    }
    myfile.close();

}
std::string Filereader::read()const
{
    return m_data;
}


Consolereader::Consolereader()
{

    std::cout<<"> cmd >>>"<<std::endl;
    std::getline(std::cin, m_data,'\n');


}
std::string Consolereader::read()const
{
    return  m_data;
}
