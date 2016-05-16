#ifndef USERLEARN_H
#define USERLEARN_H

#include "database.h"

class userlearn : public database{
public:
    void Record(std::string word);
    void Learn(std::string word);
    bool CheckWord(std::string word);
    void AddSentence(std::string word, std::string sentence);
    void Sentence(std::vector<std::string> &allst, std::string word);
    int WordRemembered();
    userlearn(std::string name);
    ~userlearn();
};
