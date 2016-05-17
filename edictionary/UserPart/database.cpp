#include "database.h"

char* database :: Convert(std::string str)
{
    char *ch;
    const int len = str.length();
    ch = new char[len+1];
    strcpy(ch, str.c_str());
    return ch;
}

char* database :: Path(const char* folder, char* name, const char* file)
{
    char *pt;
    strcpy(pt, folder);
    strcat(pt, "\\");
    strcat(pt, name);
    strcat(pt, "\\");
    strcat(pt, file);
    return pt;
}
