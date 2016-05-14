#ifndef EDICCONTROLER_H
#define EDICCONTROLER_H

#include <string>
#include <vector>
#include "edicuser.h"
#include "myrand.h"
#include "wordnote.h"

class ediccontroler
{
private:
    std::vector<Wordnote> dictionary;
public:
    edicuser *User;//不含参数 不需在初始化列表里调用其构造函数
    bool GetTestPaper(std::vector<Wordnote>& testpaper);//获取背单词考卷
    int GetVocaList(std::string vocabulary, std::vector<Wordnote>& vocalist);//查询单词词条
    void Init();//初始化
    ediccontroler();
    ~ediccontroler();
};

#endif // EDICCONTROLER_H
