//
// Created by a on 7/5/20.
//

#ifndef DNDSEQUENCE_STATUSDNA_H
#define DNDSEQUENCE_STATUSDNA_H


#include <string>
#include <list>
class StatusDna {
public:
    StatusDna(const std::string& status);

private:
    std::string m_status;
    std::list<std::string> m_statuslist;

};


#endif //DNDSEQUENCE_STATUSDNA_H
