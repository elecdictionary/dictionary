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
    stranum = value;
    //...在文件中修改策略
}

int edicuser::getStralev() const
{
    return stralev;
}

void edicuser::setStralev(int value)
{
    stralev = value;
    //在文件中修改难度
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
    
    //...判断该用户名和密码是否正确
    
    if(flag){
        username = name;
        Init();
    }
    return flag;
}

bool edicuser::UserRegister(std::string name, std::string password)
{
    //...创建用户个人信息文件夹
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
    return 1;//1表示通过
}

void edicuser::Init()
{
    status = 1;
    //...读取级别和策略以及已背单词数
}

bool edicuser::AdjSettings(int num, int lev)
{
    if(status == 0) //没什么用
        return 0;
    setStranum(num);
    setStralev(lev);
    return 1;
}

edicuser::edicuser()
{
    status = 0;//表示未登录
}

edicuser::~edicuser()
{

}
