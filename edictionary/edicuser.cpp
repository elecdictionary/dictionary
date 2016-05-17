#include "edicuser.h"


int edicuser::getWordnum() const
{
    return wordnum;
}

int edicuser::getStranum() const
{
    return stranum;
}

void edicuser::setStranum(int value)
{
    if(!status) return ;
    stranum = value;
    userModify->SetNum(value);
    userModify->Save();
}

int edicuser::getStralev() const
{
    return stralev;
}

void edicuser::setStralev(int value)
{
    if(!status) return ;
    stralev = value;
    userModify->SetLevel(value);
    userModify->Save();
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
    return 1;
}

bool edicuser::CheckUserName(std::string name)
{
    return makeUser->CheckName(name);//1表示通过
}

void edicuser::Init()
{
    status = 1;
    userModify = new usermodify(username);
    stralev = userModify->ShowLevel();
    stranum = userModify->ShowNum();
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

bool edicuser::AddSentences(std::string vocabulary, std::string sentence, std::string chinese)
{
    //...在词库中位用户中添加例句
    return 1;
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
}
