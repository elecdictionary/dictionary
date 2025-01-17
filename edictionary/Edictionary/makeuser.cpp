#include "makeuser.h"

makeuser :: makeuser(): namelen(80), codelen(80), userlev(1), usernum(50), capacity(14330) {}

makeuser::~makeuser() {}

bool makeuser :: CheckName(std::string sname)
{

    char *name;
    name = Convert(sname);

    char username[namelen];
    std::fstream alluser;
    alluser.open(".\\users\\alluser.info");
    if (!alluser)
        return true;
    while(!alluser.eof())
    {
        alluser.getline(username, namelen);
        if (strcmp(name, username) == 0)
        {
            //std::cout << "This name has been already used!" << std::endl;
            alluser.close();
            return false;
        }
    }
    alluser.close();
    return true;
}

void makeuser :: GetUser(std::string sname, std::string scode)
{
    char *filename;
    char *name;
    name = Convert(sname);
    char *code;
    code = Convert(scode);

    //make folders
    char *commend;
    commend = new char[100];
    strcpy(commend, "mkdir users\\");
    strcat(commend, name);
    system(commend);
    delete commend;
    commend = new char[100];
    strcpy(commend, "mkdir record\\");
    strcat(commend, name);
    system(commend);
    delete commend;

    filename = Path("users", name, "standard.info");
    std::ofstream fout;
    fout.open(filename);
    fout << name << std::endl;
    fout << code << std::endl;
    fout.close();
    delete filename;

    filename = Path("users", name, "level.info");
    fout.open(filename);
    fout << userlev << std::endl;
    fout.close();
    delete filename;

    filename = Path("users", name, "number.info");
    fout.open(filename);
    fout << usernum << std::endl;
    fout.close();
    delete filename;

    fout.open(".\\users\\alluser.info", std::ios::app);
    fout << name << std::endl;
    fout.close();

    filename = Path("record", name, "wordinfo.info");
    vocabulary makewords;
    std::vector<wordnote> words;
    makewords.GetWords(words);
    fout.open(filename);
    for (int i = 0; i < words.size(); i++)
        fout << words[i].getVoca() << " " << 0 << std::endl;
    fout.close();
    delete filename;
}












