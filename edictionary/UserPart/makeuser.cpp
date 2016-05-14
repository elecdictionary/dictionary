#include "makeuser.h"

makeuser :: makeuser(): namelen(80), userlev(0), usernum(0) {}

char* makeuser :: Convert(std::string str)
{
    char *ch;
    const int len = str.length();
    ch = new char[len+1];
    strcpy(ch, str.c_str());
    return ch;
}

char* makeuser :: UserPath(char* name, const char* file)
{
    char *pt;
    strcpy(pt, ".\\users\\");
    strcat(pt, name);
    strcat(pt, "\\");
    strcat(pt, file);
    return pt;
}

bool makeuser :: CheckName(std::string sname)
{

    char *name;
    name = Convert(sname);

    char username[namelen];
    std::fstream alluser;
    alluser.open(".\\users\\alluser.info");
    while(!alluser.eof())
    {
        alluser.getline(username, namelen);
        if (strcmp(name, username) == 0)
        {
            std::cout << "This name has been already used!" << std::endl;
            alluser.close();
            return false;
        }
    }
    alluser.close();
    return true;
}

void makeuser :: GetUser(std::string sname, std::string scode)
{
    char *name;
    name = Convert(sname);

    char *code;
    code = Convert(scode);

    char *filename;
    filename = UserPath(name, "standard.info");
    std::ofstream fout;
    char *fn = filename, *tag;
    for(tag = fn; *tag; tag++)
    {
        if (*tag=='\\')
        {
            char buf[1000],path[1000];
            strcpy(buf, fn);
            buf[strlen(fn)-strlen(tag)+1] = NULL;
            strcpy(path, buf);
            if (access(path,6) == -1)
            {
                mkdir(path);
            }
        }
    }
    fout.open(filename);
    fout << name << std::endl;
    fout << code << std::endl;
    fout.close();

    filename = UserPath(name, "level.info");
    fout.open(filename);
    fout << userlev << std::endl;
    fout.close();

    filename = UserPath(name, "number.info");
    fout.open(filename);
    fout << usernum << std::endl;
    fout.close();

    fout.open(".\\users\\alluser.info", std::ios::app);
    fout << name << std::endl;
    fout.close();

}
