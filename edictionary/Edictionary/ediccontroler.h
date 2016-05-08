#ifndef EDICCONTROLER_H
#define EDICCONTROLER_H

#include "edicuser.h"
#include <string>
#include <vector>

struct wordnote{
    std::string voca, pronun, cat, chinese;
    int lev;
};

class ediccontroler
{
private:
    std::vector<wordnote> dictionary;
public:
    edicuser user;//不含参数 不需在初始化列表里调用其构造函数
    void GetTestPaper(std::vector<wordnote>& testpaper);//获取背单词考卷
    void GetVocaList(std::string vocabulary, std::vector<wordnote>& vocalist);//查询单词词条
    void Init();//初始化
    ediccontroler();
    ~ediccontroler();
};

#endif // EDICCONTROLER_H
