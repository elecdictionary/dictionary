#ifndef MAKEUSER_H
#define MAKEUSER_H

#include <io.h>
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

class makeuser{
protected:
    const int namelen;
    int userlev, usernum;
public:
    bool CheckName(std::string sname);
    void GetUser(std::string sname, std::string scode);
    char* Convert(std::string str);
    char* UserPath(char* name, const char* Path);
    makeuser();
    ~makeuser();
};

#endif //MAKEUSER_H
