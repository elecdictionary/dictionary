#ifndef USERLEARN_H
#define USERLEARN_H

#include "database.h"
#include <ctime>

class userlearn : public database{
private:
    std::string username;
    char *date;
    std::vector<mywordrecord> allrecord;
public:
    void TempRecord(std::vector<mywordrecord> record);
    int GetTemp(std::vector<mywordrecord> &record);
    void MakeRecord(std::vector<mywordrecord> record);
    void GetNotRemembered(std::vector<std::string> &words);
    void MakeWordInfo(std::vector<mywordrecord> record);
    void Record(std::string word);
    bool CheckWord(std::string word);
    void AddSentence(std::string sword, mysentences stc);
    void Sentence(std::vector<mysentences> &allst, std::string sword);
    void DelSentence(int index, std::string sword);
    void MakeHistory(std::string word);
    void GetHistory(std::vector<std::string> &history);
    int WordRemembered();
    userlearn(std::string sname);
    ~userlearn();
};

#endif //USERLEARN_H
