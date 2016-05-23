#include "usermodify.h"

usermodify :: usermodify(std::string sname)
{
    username = Convert(sname);
}

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
    filename = Path("users", username, "number.info");
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
    codenow = new char[100];
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

void usermodify :: SaveCode()
{
    if (!newcode)
        return;
    char *filename;
    filename = Path("users", username, "standard.info");
    std::ofstream modify;
    modify.open(filename);
    modify << username << std::endl;
    modify << newcode << std::endl;
    modify.close();
}

void usermodify :: SaveLevNum()
{
    char* filename;
    filename = Path("users", username, "level.info");
    std::ofstream modify;
    modify.open(filename);
    modify << userlev << std::endl;
    modify.close();
    filename = Path("users", username, "number.info");
    modify.open(filename);
    modify << usernum << std::endl;
    modify.close();
}

usermodify::~usermodify()
{
    delete newcode;
    delete username;
}
