#ifndef EDICCONTROLER_H
#define EDICCONTROLER_H

#include <string>
#include <vector>
#include "edicuser.h"
#include "myrand.h"
#include "wordnote.h"
#include "allstruct.h"
#include "vocabulary.h"
#include "mylog.h"

class ediccontroler
{
private:
    std::vector<wordnote> Dictionary, WordtypeDictionary;
    vocabulary *Dicdata;
public:
    edicuser *User;//不含参数 不需在初始化列表里调用其构造函数
    bool GetTestPaper(std::vector<mywordrecord>& testpaper);//生成背单词考卷
    bool CheckWord(std::string word);//检查单词是否在词库中
    int GetVocaList(std::string vocabulary, wordnote &vocalist);//查询单词词条
    bool GetSentences(std::string vocabulary, std::vector<mysentences> &sentences);//查找例句
    bool GetTestInfo(std::vector<mywordrecord> testpaper, std::vector<mywordrecord> &testinfo);//获取当日背单词信息
    bool GetTextNewWorld(std::string origintext, std::vector<std::string> &wordlist);//获取文本生词
    void Init();//初始化
    ediccontroler();
    ~ediccontroler();
};

#endif // EDICCONTROLER_H
