#ifndef DNA_ANALYZER_PROJECT_NEW_H
#define DNA_ANALYZER_PROJECT_NEW_H
#include "../ImanageDna.h"
#include "../../View/rawDnaWriter.h"


class New:public Icreate
{
    public:
        /*virtual*/~New(){};
        std::string run(Iwriter &writer, Ireader& reader, dataDNA& containerDna, const Paramcommand& obj);

    private:
        bool isValid(const Paramcommand& obj);
        std::string print(Iwriter& writer, dataDNA& containerDna);
};

#endif //DNA_ANALYZER_PROJECT_NEW_H
