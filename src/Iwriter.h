//
// Created by a on 6/30/20.
//

#ifndef DNA_IWRITER_H
#define DNA_IWRITER_H

#include <iostream>

class Iwriter{

public:
  virtual void write(const char* data)const=0;

};


class Datawriter:public Iwriter{

protected:
    std::string m_data;

};


class Filewriter:public Datawriter{

public:
    Filewriter(std::string data);
    void write(const char* data)const;


};

class Consolewriter:public Datawriter{

public:
    void write(const char* data)const;


};


#endif //DNA_IWRITER_H
