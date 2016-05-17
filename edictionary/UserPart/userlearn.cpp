#include "userlearn.h"

userlearn :: userlearn(std::string sname)//: capacity(14330)
{
    username = sname;

    char *filename, *name;
    int i = 0;
    name = Convert(sname);
    filename = Path("record", name, "learningset.info");
    std::ifstream lset;
    lset.open(filename);
    while (!lset.eof())
    {
        lset >> learningset[i];
        i++;
    }

    //建立当天文件夹
    char *commend;
    std::time_t t = time(0);
    strftime(date, 20, "%Y/%m/%d", localtime(&t));
    strcpy(commend, "mkdir record\\");
    strcat(commend, name);
    strcat(commend, "\\");
    strcat(commend, date);
    system(commend);
}

void userlearn :: Learn(std::string sword)
{
    char *filename, *name;
    name = Convert(username);
    strcpy(filename, "record\\");
    strcat(filename, name);
    strcat(filename, "\\");
    strcat(filename, date);
    strcat(filename, "\\");
}

void userlearn :: Record(std::string sword)
{
    char *filename, *name;
    name = Convert(username);
    filename = Path("record", name, "remembered.info");
    std::ofstream fout(filename, std::ios::app);
    fout << sword << std::endl;
    fout.close();
}

bool userlearn :: CheckWord(std::string sword)
{
    char *filename, *name;
    std::string wordr;
    name = Convert(username);
    filename = Path("record", name, "remembered.info");
    std::ifstream fin(filename);
    if (!fin)
        return false;
    while (!fin.eof())
    {
        getline(fin, wordr);
        if (wordr.compare(sword) == 0)
            return true;
    }
    return false;
}

void userlearn :: AddSentence(std::string sword, std::string stc)
{
    char *filename, *name, *word;
    word = Convert(sword);
    name = Convert(username);
    strcat(word, ".txt");
    filename = Path("record", name, word);
    std::ofstream fout(filename, std::ios::app);
    fout << stc << std::endl;
    fout.close();
}

void userlearn :: Sentence(std::vector<std::string> &allst, std::string sword)
{
    char *filename, *name, *word;
    word = Convert(sword);
    name = Convert(username);
    strcat(word, ".txt");
    filename = Path("record", name, word);
    std::ifstream st(filename);
    if (!st)
        return;
    std::string stc;
    while (!st.eof())
    {
        std::getline(st, stc);
        stc[stc.length()-1] = '\0';
        allst.push_back(stc);
        stc.clear();
    }
}

int userlearn :: WordRemembered()
{/*
    int sum;
    for (int i = 0; i < capacity; i++)
        if (learningset[i] == 3)
            sum++;
    return sum;*/
}

userlearn :: ~userlearn()
{
    delete date;
    date = NULL;
}














