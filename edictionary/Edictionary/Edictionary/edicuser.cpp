#include "edicuser.h"


int edicuser::getWordnum() const
{
    return wordnum;
}

int edicuser::getStranum()
{
    stranum = userModify->ShowNum();
    return stranum;
}

void edicuser::setStranum(int value)
{
    if(!status) return ;
    stranum = value;
    userModify->SetNum(value);
    userModify->SaveLevNum();
}

int edicuser::getStralev()
{
    stralev = userModify->ShowLevel();
    return stralev;
}

void edicuser::setStralev(int value)
{
    if(!status)
        return ;
    stralev = value;
    userModify->SetLevel(value);
    userModify->SaveLevNum();
}

std::string edicuser::getUsername() const
{
    return username;
}

int edicuser::getStatus() const
{
    return status;
}

bool edicuser::Login(std::string name, std::string password)
{
    bool flag = 0;
    userModify = new usermodify(name);
    if(password == userModify->ShowCode())
        flag = 1;
    else
        flag = 0;
    delete userModify;
    userModify = NULL;
    if(flag){
        username = name;
        Init();
    }
    return flag;
}

bool edicuser::UserRegister(std::string name, std::string password)
{
    makeUser->GetUser(name, password);
    //.可能还需创建其他文件
    return 1;
}

bool edicuser::Logout()
{
    status = 0;
    username = "";
    stralev = 0;
    stranum = 0;
    delete userLearn;
    delete userModify;
    return 1;
}

bool edicuser::CheckUserName(std::string name)
{
    return makeUser->CheckName(name);//1表示通过
}

void edicuser::Init()
{
    //MyLog mylog;
    status = 1;
    userModify = new usermodify(username);
    userLearn = new userlearn(username);
    stralev = userModify->ShowLevel();
    stranum = userModify->ShowNum();
    //mylog.print(userModify->ShowLevel());
    //mylog.print(userModify->ShowNum());
    //...读取已背单词数
}

bool edicuser::AdjSettings(int num, int lev)
{
    if(status == 0) //没什么用
        return 0;
    setStranum(num);
    setStralev(lev);
    return 1;
}

bool edicuser::ChangePassword(std::string formalpassword, std::string newpassword)
{
    if(formalpassword != userModify->ShowCode()){
        return 0;
    }
    else{
        userModify->ChangeCode(newpassword);
        userModify->SaveCode();
        return 1;
    }
}

bool edicuser::AddSentences(std::string vocabulary, std::string sentence, std::string chinese)
{
    //MyLog mylog;

    //std::string esentence, csentence;
    mysentences ret;
    int lene, lenc;
    lenc = lene = 0;
    /*for(auto i:sentence)
    {
        if(i != '\n'){
            esentence[lene ++] = i;
        }
    }
    for(auto i:chinese)
    {
        if(i != '\n'){
            csentence[lene ++] = i;
        }
    }*/
    ret.English = sentence;
    ret.Chinese = chinese;
    //过滤回车功能有问题
    //mylog.print(0);
    userLearn->AddSentence(vocabulary, ret);
    //mylog.print(1);
    return 1;
}

bool edicuser::TempSave(std::vector<mywordrecord> wordtest)
{
    userLearn->TempRecord(wordtest);
    return 1;
}

bool edicuser::FinalSave(std::vector<mywordrecord> testinfo)
{
    userLearn->MakeRecord(testinfo);
    return 1;
}

bool edicuser::CheckRecited(std::string vocabulary)
{
    return userLearn->CheckWord(vocabulary);
}

bool edicuser::GetLasttimeVocabulary(std::vector<std::string> &lasttimevocabulary)
{
    //MyLog mylog;
    //mylog.print(0);
    userLearn->GetNotRemembered(lasttimevocabulary);
    //mylog.print(1);
    return 1;
}

bool edicuser::GetSentences(std::string vocabulary, std::vector<mysentences> &sentences)
{
    userLearn->Sentence(sentences, vocabulary);
    return 1;
}

int edicuser::GetTempRecord(std::vector<mywordrecord> &temprecord)
{
    int ret;
    ret = userLearn->GetTemp(temprecord);
    return ret;
}

edicuser::edicuser()
{
    status = 0;//表示未登录
    makeUser = new makeuser();
}

edicuser::~edicuser()
{
    delete userModify;
    delete makeUser;
    delete userLearn;
}
