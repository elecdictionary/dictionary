#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <io.h>
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

class database{
public:
    char* Convert(std::string str);
    char* Path(const char* folder, char* name, const char* Path);
    database();
    ~database();
};

#endif //DATABASE_H
