#include "userlearn.h"

userlearn :: userlearn(std::string sname)
{
    username = sname;

    /*char *name;
    name = Convert(sname);
    //建立当天文件夹
    char *commend;
    commend = new char[100];*/
    date = new char[50];
    std::time_t t = time(0);
    strftime(date, 20, "%Y/%m/%d", localtime(&t));
    /*strcpy(commend, "mkdir record\\");
    strcat(commend, name);
    strcat(commend, "\\");
    strcat(commend, date);
    system(commend);*/
}

void userlearn :: TempRecord(std::vector<mywordrecord> record)
{
    char *filename, *name;
    name = Convert(username);
    filename = Path("record", name, "record.tmp");
    std::ofstream fout(filename);
    fout << date << std::endl;
    for (int i = 0; i < record.size()-1; i++)
    {
        fout << record[i].Vocabulary << " " << record[i].Record << std::endl;
    }
    fout << record[record.size()-1].Vocabulary << " " << record[record.size()-1].Record;
    fout.close();
}

int userlearn :: GetTemp(std::vector<mywordrecord> &record)
{
    char *filename, *name;
    name = Convert(username);
    filename = Path("record", name, "record.tmp");
    std::ifstream fin(filename);
    if (!fin)
        return 0;
    char ndate[20];
    fin.getline(ndate, 20);
    if (strcmp(ndate, date) != 0)
        return 0;
    mywordrecord *list;
    while (!fin.eof())
    {
        list = new mywordrecord;
        fin >> list->Vocabulary >> list->Record;
        if (list->Record == 0)
            record.push_back(*list);
        delete list;
    }
    if (record.size() == 0)
        return 2;
    return 1;
}

void userlearn :: MakeRecord(std::vector<mywordrecord> record)
{
    char *filename, *name;
    name = Convert(username);
    filename = Path("record", name, "last.info");
    std::ofstream fout(filename);
    if (!fout)
        return;
    for (int i = 0; i < record.size(); i++)
    {
        fout << record[i].Vocabulary << " " << record[i].Record << std::endl;
    }
}

void userlearn :: GetNotRemembered(std::vector<std::string> &words)
{
    char *filename, *name;
    name = Convert(username);
    filename = Path("record", name, "last.info");
    std::ifstream fin(filename);
    if (!fin) return;
    std::string word;
    int rec;
    while (!fin.eof())
    {
        fin >> word >> rec;
        if (rec == 0)
            words.push_back(word);
    }
}

void userlearn :: MakeWordInfo(std::vector<mywordrecord> record)
{
    char *filename, *name;
    filename = Path("record", name, "wordinfo.info");
    name = Convert(username);
    std::ifstream fin(filename);
    std::vector<mywordrecord> info;
    mywordrecord *list;
    while (!fin.eof())
    {
        list = new mywordrecord;
        fin >> list->Vocabulary >> list->Record;
        info.push_back(*list);
        delete list;
    }
    fin.close();
    for (int i = 0; i < record.size(); i++)
        for (int j = 0; j < info.size(); j++)
            if (info[j].Vocabulary.compare(record[i].Vocabulary) == 0)
                info[j].Record = info[j].Record + record[i].Record;
    std::ofstream fout(filename);
    for (int i = 0; i < info.size(); i++)
        fout << info[i].Vocabulary << " " << info[i].Record << std::endl;
    fout.close();
    delete filename;
    filename = Path("record", name, "remembered.info");
    fout.open(filename);
    for (int i = 0; i < info.size(); i++)
        if (info[i].Record == 2)
            fout << info[i].Vocabulary << std::endl;
    fout.close();
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

void userlearn :: AddSentence(std::string sword, mysentences stc)
{
    char *filename, *name, *word;
    word = Convert(sword);
    name = Convert(username);
    strcat(word, ".txt");
    filename = Path("record", name, word);
    std::ofstream fout(filename, std::ios::app);
    fout << stc.English << std::endl;
    fout << stc.Chinese << std::endl;
    fout.close();
}

void userlearn :: Sentence(std::vector<mysentences> &allst, std::string sword)
{
    //MyLog mylog;
    char *filename, *name, *word;
    word = Convert(sword);
    name = Convert(username);
    strcat(word, ".txt");
    filename = Path("record", name, word);
    std::ifstream st(filename);
    if (!st)
        return;
    mysentences *stc;
    while (!st.eof())
    {
        stc = new mysentences;
        std::getline(st, stc->English);
        stc->English[stc->English.length()] = '\0';
        std::getline(st, stc->Chinese);
        stc->Chinese[stc->Chinese.length()] = '\0';
        allst.push_back(*stc);
        delete stc;
    }
    //mylog.print(allst);
}

int userlearn :: WordRemembered()
{
    char *filename, *name;
    name = Convert(username);
    filename = Path("record", name, "remembered.info");
    std::string word;
    int sum = 0;
    std::ifstream fin(filename);
    while (getline(fin, word))
    {
        sum++;
    }
    return sum;
}

userlearn :: ~userlearn()
{
    delete date;
    date = NULL;
}














