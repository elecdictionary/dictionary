#ifndef USERMODIFY_H
#define USERMODIFY_H

#include "makeuser.h"

class usermodify : public makeuser{
private:
    char *newcode, *username;
public:
    void ChangeCode(std::string scode);
    int ShowLevel();
    int ShowNum();
    char* ShowCode();
    void SetLevel(int level);
    void SetNum(int num);
    void Save();
    usermodify(std::string sname);
    ~usermodify();
};

#endif //USRMODIFY_H
