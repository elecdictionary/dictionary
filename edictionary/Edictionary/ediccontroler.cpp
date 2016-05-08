#include "ediccontroler.h"

void ediccontroler::GetTestPaper(std::vector<wordnote> &testpaper)
{
    wordnote ret;
    int num = user.stranum, num1, num2;
    int dsize = dictionary.size();
    int paper[300];
    if(user.stralev == 1){
        num1 = (double)num * 0.7;
        num2 = num - num1;
    }
    if(user.stralev == 2){
        num1 = (double)num * 0.5;
        num2 = num - num1;
    }
    for(int i = 1; i <= num1; i ++)
    {
        //...随机找难度为1的一个单词
        testpaper.push_back(ret);
    }
    for(int i = 1; i <= num2; i ++)
    {
        //...随机找难度为2的一个单词
        testpaper.push_back(ret);
    }
}

void ediccontroler::GetVocaList(std::string vocabulary, std::vector<wordnote> &vocalist)
{
    std::vector<wordnote>::iterator it;
    for(it = dictionary.begin(); it != dictionary.end(); it ++)
    {
        if(vocabulary == (*it).voca){
            vocalist.push_back(*it);
            return ;
        }
    }
}

void ediccontroler::Init()
{
    //...将词典库导入dictionary
}

ediccontroler::ediccontroler()
{
    Init();
}

ediccontroler::~ediccontroler()
{

}
