#ifndef VOCABULARY_H
#define VOCABULARY_H

#include "database.h"
#include "wordnote.h"

class vocabulary : public database
{
public:
    void GetWords(std::vector<wordnote> &allwords);
    void Sentence(std::vector<std::string> &allst, std::string word);
    //void AddSentence(std::string word);
    vocabulary();
    ~vocabulary();
};
