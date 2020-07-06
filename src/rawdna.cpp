//
// Created by a on 7/6/20.
//

#include <string>
#include "rawdna.h"
////////files/////////


rawdna::rawdna(const char *name_file){
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

std::string rawdna::read()const
{
    return m_data;

}