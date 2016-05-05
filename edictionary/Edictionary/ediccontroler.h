#ifndef EDICCONTROLER_H
#define EDICCONTROLER_H

#include "edicuser.h"
#include <vector>

struct wordnote{
    char voca[30], pronun[30], cat[30], chinese[30];
};

class ediccontroler
{
private:
    std::vector<wordnote> dictionary;
public:
    edicuser user;//不含参数 不需在初始化列表里调用其构造函数
    void Gettestpaper(std::vector<wordnote> &testpaper);//获取背单词考卷
    void init();//初始化
    ediccontroler();
    ~ediccontroler();
};

#endif // EDICCONTROLER_H
