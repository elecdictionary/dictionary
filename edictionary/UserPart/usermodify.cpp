#include "usermodify.h"

usermodify :: usermodify(std::string sname)
{
    username = Convert(sname);
}

void usermodify :: ChangeCode(std::string scode)
{
    newcode = Convert(scode);
}

void usermodify :: SetLevel(int level)
{
    userlev = level;
}

void usermodify :: SetNum(int num)
{
    usernum = num;
}

void usermodify :: Save()
{
    char* filename;
    std::ofstream modify;

    GetUser(username, newcode);

    filename = UserPath(username, "level.info");
    modify.open(filename);
    modify << userlev << std::endl;
    modify.close();

    filename = UserPath(username, "number.info");
    modify.open(filename);
    modify << usernum << std::endl;
    modify.close();
}
