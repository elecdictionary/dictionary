#ifndef EDICCONTROLER_H
#define EDICCONTROLER_H

#include <string>
#include <vector>
#include "edicuser.h"
#include "myrand.h"
#include "wordnote.h"
#include "allstruct.h"
#include "vocabulary.h"

class ediccontroler
{
private:
    std::vector<wordnote> dictionary;
public:
    edicuser *User;//不含参数 不需在初始化列表里调用其构造函数
    vocabulary *Dicdata;
    bool GetTestPaper(std::vector<wordnote>& testpaper);//获取背单词考卷
    int GetVocaList(std::string vocabulary, wordnote &vocalist);//查询单词词条
    void GetSentences(std::string vocabulary, std::vector<mysentences> &sentences);//查找例句
    void Init();//初始化
    ediccontroler();
    ~ediccontroler();
};

#endif // EDICCONTROLER_H
