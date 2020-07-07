//
// Created by a on 6/30/20.
//

#ifndef DNA_IREADER_H
#define DNA_IREADER_H


class Ireader{
public:
    virtual void read()const=0 ;


};


class Datareader:public Ireader{

protected:
     std::string m_data;
     std::string m_nameFile;
};


class Filereader:public Datareader{



};

class Consolereader:public Datareader{

public:

    std::string get()const;
    void read();



};


#endif //DNA_IREADER_H
