#include "edicuser.h"


bool edicuser::Login(char *name, char *password)
{
    bool flag;

    //...判断该用户名和密码是否正确

    if(flag){
        strcpy(username, name);
        Init();
    }
    return flag;
}

bool edicuser::UserRegister(char *name, char *password)
{
    //...创建用户个人信息文件夹
}

void edicuser::Init()
{
    status = 1;
    //...读取级别和策略
}

void edicuser::AdjSettings(int num, int lev)
{
    stralev = lev;
    stranum = num;
}

edicuser::edicuser()
{
    status = 0;//表示未登录
}

edicuser::~edicuser()
{

}
