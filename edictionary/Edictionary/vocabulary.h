#ifndef VOCABULARY_H
#define VOCABULARY_H

#include "database.h"
#include "wordnote.h"
#include "mylog.h"

class vocabulary : public database
{
public:
    void GetWords(std::vector<wordnote> &allwords);
    void Sentence(std::vector<mysentences> &allst, std::string word);
    //void AddSentence(std::string word);
    vocabulary();
    ~vocabulary();
};

#endif //VOCABULARY_H
