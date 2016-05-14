#include "ediccontroler.h"

bool ediccontroler::GetTestPaper(std::vector<Wordnote> &testpaper)
{
    if(User->getStatus() == 0)
        return 0;
    Wordnote ret;
    int num = User->getStranum(), num1, num2;
    int dsize = dictionary.size();
    int paper[300];
    if(User->getStralev() == 1){
        num1 = (double)num * 0.7;
        num2 = num - num1;
    }
    if(User->getStralev() == 2){
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
    return 1;
}

int ediccontroler::GetVocaList(std::string vocabulary, std::vector<Wordnote>& vocalist)
{
    if(User->getStatus() == 0)
        return 0;//
    std::vector<Wordnote>::iterator it;
    for(it = dictionary.begin(); it != dictionary.end(); it ++)
    {
        if(vocabulary == (*it).getVoca()){
            vocalist.push_back(*it);
            return 1;//成功获取
        }
    }
    return 2;//表示不存在该单词，未处理文件丢失等情况
}

void ediccontroler::Init()
{
    srand(time(0));//初始化随机种子
    //...将词典库导入dictionary
}

ediccontroler::ediccontroler()
{
    User = new edicuser();
    Init();
}

ediccontroler::~ediccontroler()
{
    delete User;
}
