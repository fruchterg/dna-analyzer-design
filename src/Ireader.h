//
// Created by a on 6/30/20.
//

#ifndef DNA_IREADER_H
#define DNA_IREADER_H


class Ireader{
public:
    virtual std::string read()const=0 ;


};


class Datareader:public Ireader{

protected:
     std::string m_data;
};


class Filereader:public Datareader{



};

class Consolereader:public Datareader{

public:

    Consolereader();

    std::string read()const;



};


#endif //DNA_IREADER_H
