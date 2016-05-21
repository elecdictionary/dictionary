#ifndef MYLOG_H
#define MYLOG_H

#include <fstream>
#include <string>
#include "wordnote.h"
#include <vector>
#include "allstruct.h"

class MyLog
{
private:
    std::ofstream fout;
public:
    MyLog();
    ~MyLog();
    void print(std::string word);
    void print(int num);
    void print(std::vector<wordnote> wordlist);
    void print(std::vector<mywordrecord> wordrecord);
    void print(std::vector<mysentences> wordrecord);
};

#endif // MYLOG_H
