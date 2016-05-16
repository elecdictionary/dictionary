#ifndef MAKEUSER_H
#define MAKEUSER_H

#include "database.h"


class makeuser : public database{
protected:
    const int namelen, codelen;
    int userlev, usernum;
public:
    bool CheckName(std::string sname);
    void GetUser(std::string sname, std::string scode);
    makeuser();
    ~makeuser();
};

#endif //MAKEUSER_H