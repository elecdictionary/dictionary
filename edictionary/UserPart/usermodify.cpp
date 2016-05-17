#include "usermodify.h"

usermodify :: usermodify(std::string sname)
{
    username = Convert(sname);
}

usermodify::~usermodify(){}

int usermodify :: ShowLevel()
{
    char* filename;
    filename = Path("users", username, "level.info");
    std::ifstream file(filename);
    int level;
    file >> level;
    file.close();
    return level;
}

int usermodify :: ShowNum()
{
    char* filename;
    filename = Path("users", username, "num.info");
    std::ifstream file(filename);
    int num;
    file >> num;
    file.close();
    return num;
}

std::string usermodify :: ShowCode()
{
    char *filename;
    filename = Path("users", username, "standard.info");
    std::ifstream file(filename);
    char name[namelen], code[codelen];
    file.getline(name, namelen);
    file.getline(code, codelen);
    char *codenow;
    strcpy(codenow, code);
    std::string scode(codenow);
    return scode;
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

    filename = Path("users", username, "level.info");
    modify.open(filename);
    modify << userlev << std::endl;
    modify.close();

    filename = Path("users", username, "number.info");
    modify.open(filename);
    modify << usernum << std::endl;
    modify.close();
}
