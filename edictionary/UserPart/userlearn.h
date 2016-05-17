#ifndef USERLEARN_H
#define USERLEARN_H

#include "database.h"
#include <ctime>

class userlearn : public database{
private:
    const int capacity;
    std::string username;
    int learningset[capacity];
    char *date;
    //char* Path(const char* folder, char* name, const char* file);
public:
    void Learn(std::string word);
    void Record(std::string word);
    bool CheckWord(std::string word);
    void AddSentence(std::string sword, std::string stc);
    void Sentence(std::vector<std::string> &allst, std::string sword);
    int WordRemembered();
    userlearn(std::string sname);
    ~userlearn();
};

#endif //USERLEARN_H
