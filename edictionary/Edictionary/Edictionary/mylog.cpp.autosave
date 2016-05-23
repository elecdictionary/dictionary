#include "mylog.h"

MyLog::MyLog()
{
    fout.open("Log.txt");
}

MyLog::~MyLog()
{
    fout.close();
}

void MyLog::print(std::string word)
{
    fout << word << std::endl;
}

void MyLog::print(int num)
{
    fout << num << std::endl;
}

void MyLog::print(std::vector<wordnote> wordlist)
{
    for(auto i : wordlist)
    {
        fout << i.getVoca() << " " << i.getPronun() << " " << i.getCat() << " " << i.getChinese() << " " << i.getLev() << std::endl;
    }
}

void MyLog::print(std::vector<mywordrecord> wordrecord)
{
    for(auto i : wordrecord)
    {
        fout << i.Vocabulary << " " << i.Record << std::endl;
    }
}

void MyLog::print(std::vector<mysentences> sentences)
{
    for(auto i : sentences)
    {
        fout << i.English << std::endl;
        fout << i.Chinese << std::endl;
    }
}
