#include "ediccontroler.h"

bool ediccontroler::GetTestPaper(std::vector<mywordrecord> &testpaper)
{
    //MyLog mylog;

    //mylog.print(0);
    if(User->getStatus() == 0)
        return 0;
    mywordrecord ret;
    std::vector<std::string> lasttime;
    std::vector<mywordrecord> temprecord;
    int num = User->getStranum(), num1, num2;
    int dsize = Dictionary.size();
    int flag, snum;
    bool temp;
    flag = User->GetTempRecord(temprecord);
    //mylog.print(1);
    //mylog.print(temprecord);
    //获取今日任务完成情况
    if(flag == 2){
        return 0;
    }
    else if(flag == 1){
        testpaper = temprecord;
        return 1;
    }
    else if(flag == 0){
        //mylog.print(2);
        User->GetLasttimeVocabulary(lasttime);
        //mylog.print(3);
        //获取上次完成数据
        for(auto i:lasttime){
            ret.Vocabulary = i;
            ret.Record = 0;
            testpaper.push_back(ret);
        }
        num -= lasttime.size();
        if(User->getStralev() == 1){
            num1 = (double)num * 0.7;
            num2 = num - num1;
        }
        if(User->getStralev() == 2){
            num1 = (double)num * 0.5;
            num2 = num - num1;
        }
        //mylog.print(num);
        //mylog.print(num1);
        //mylog.print(num2);
        //mylog.print(4);
        for(int i = 1; i <= num1; i ++)
        {
            while(1){
                temp = 1;
                snum = MyRand(dsize);
                if(Dictionary[snum].getLev() != 1)
                    temp = 0;
                if(User->CheckRecited(Dictionary[snum].getVoca()))
                    temp = 0;
                //判断是否已经牢记
                for(auto i:testpaper)
                {
                    if(i.Vocabulary == Dictionary[snum].getVoca()){
                        temp = 0;
                        break;
                    }
                }
                if(temp){
                    ret.Record = 0;
                    ret.Vocabulary = Dictionary[snum].getVoca();
                    testpaper.push_back(ret);
                    break;
                }
            }
        }
        //mylog.print(testpaper);
        //mylog.print(5);
        for(int i = 1; i <= num2; i ++)
        {
            while(1){
                temp = 1;
                snum = MyRand(dsize);
                if(Dictionary[snum].getLev() != 2)
                    temp = 0;
                if(User->CheckRecited(Dictionary[snum].getVoca()))
                    temp = 0;
                //判断是否已经牢记
                for(auto i:testpaper)
                {
                    if(i.Vocabulary == Dictionary[snum].getVoca()){
                        temp = 0;
                        break;
                    }
                }
                if(temp){
                    ret.Record = 0;
                    ret.Vocabulary = Dictionary[snum].getVoca();
                    testpaper.push_back(ret);
                    break;
                }
            }
        }
        //mylog.print(6);
        //mylog.print(testpaper.size());
        return 1;
    }
}

bool ediccontroler::CheckWord(std::string word)
{
    //.还需加入格式判断符
    std::vector<wordnote>::iterator it;
    for(it = Dictionary.begin(); it != Dictionary.end(); it ++)
    {
        if(word == (*it).getVoca()){
            return 1;//词库中存在该单词
        }
    }
    return 0;
}

int ediccontroler::GetVocaList(std::string vocabulary, wordnote &vocalist)
{
    //MyLog mylog;

    if(User->getStatus() == 0)
        return 0;
    //mylog.print(vocabulary);
    std::vector<wordnote>::iterator it;
    for(it = Dictionary.begin(); it != Dictionary.end(); it ++)
    {
        //mylog.print((*it).getVoca().size());
        //mylog.print(vocabulary.size());
        if(vocabulary == (*it).getVoca()){
            vocalist = (*it);
            return 1;//成功获取
        }
    }
    return 2;//表示不存在该单词，未处理文件丢失等情况
}

bool ediccontroler::GetSentences(std::string vocabulary, std::vector<mysentences> &sentences)
{
    std::vector<mysentences> originsentences, usersentences;
    User->GetSentences(vocabulary, originsentences);
    Dicdata->Sentence(sentences, vocabulary);
    for(auto i : usersentences)
    {
        sentences.push_back(i);
    }
    for(auto i : originsentences)
    {
        sentences.push_back(i);
    }
    //将用户自定义例句放入sentences中,并将原有例句放入sentences中
}

bool ediccontroler::GetTestInfo(std::vector<mywordrecord> testpaper, std::vector<mywordrecord> &testinfo)
{
    //MyLog mylog;
    bool flag;
    mywordrecord ret;
    for(auto i : testpaper)
    {
        flag = 0;
        for(auto &j : testinfo)
        {
            if(j.Vocabulary == i.Vocabulary){
                flag = 1;
                j.Record = 0;
                break;
            }
        }
        if(!flag){
            ret.Vocabulary = i.Vocabulary;
            ret.Record = 1;
            testinfo.push_back(ret);
        }
    }
    //mylog.print(testpaper);
    //mylog.print(testinfo);
    return 1;
}

bool ediccontroler::GetTextNewWorld(std::string origintext, std::vector<std::string> &wordlist)
{
    MyLog mylog;
    //mylog.print("******");
    std::string ret, word;
    int len = origintext.length();
    int num1, num2;
    num1 = 0;
    for(int i = 0; i < len; i ++)
    {
        //mylog.print(i);
        if(((origintext[i] >= 'A' && origintext[i] <= 'Z') || (origintext[i] >= 'a' && origintext[i] <= 'z')) && (i == len - 1 || !((origintext[i + 1] >= 'A' && origintext[i + 1] <= 'Z') || (origintext[i + 1] >= 'a' && origintext[i + 1] <= 'z')))){
            word = origintext.substr(num1, i - num1 + 1);
            mylog.print(word);
            if(word[0] >= 'A' && word[0] <= 'Z')
                word[0] = word[0] - 'A' + 'a';
            for(auto j : Dictionary)
            {
                if(word == j.getVoca()){
                    if(!User->CheckRecited(word)){
                        wordlist.push_back(word);
                        break;
                    }
                }
            }
        }
        else if(!((origintext[i] >= 'A' && origintext[i] <= 'Z') || (origintext[i] >= 'a' && origintext[i] <= 'z'))){
            num1 = i + 1;
        }
    }
    //获取文本生词
    if (wordlist.size())
        return 1;
        else
            return 0;
}

void ediccontroler::Init()
{
    srand(time(0));
    //初始化随机种子
    Dicdata->GetWords(Dictionary);
    Dicdata->GetWordTypes(WordtypeDictionary);
    //MyLog mylog;
    //mylog.print(Dictionary);
    //将词典库导入dictionary
}

ediccontroler::ediccontroler()
{
    User = new edicuser();
    Dicdata = new vocabulary();
    Init();
}

ediccontroler::~ediccontroler()
{
    delete User;
    delete Dicdata;
}
