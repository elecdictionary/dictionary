#ifndef DATABASE_H
#define DATABASE_H

#include "allstruct.h"
#include <vector>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

class database{
public:
    char* Convert(std::string str);
    char* Path(const char* folder, char* name, const char* file);
    database();
    ~database();
};

#endif //DATABASE_H
