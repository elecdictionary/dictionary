#ifndef ALLSTRUCT_H
#define ALLSTRUCT_H

#include <string>

struct mysentences{
    std::string English, Chinese;
}; //用来存储例句

struct mywordrecord{
    std::string Vocabulary;
    int Record;
};//用来记录单词背诵结果

#endif // ALLSTRUCT_H
