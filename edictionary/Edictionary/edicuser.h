#ifndef EDICUSER_H
#define EDICUSER_H

#include <string.h>

class edicuser
{
private:
    char username[30];
    int status;//用户状态 是否登录
    int stranum, stralev;//难度和数目（通过友元函数来调整）
public:
    friend class ediccontroler;
    bool Login(char *name, char *password);//用户登录
    bool UserRegister(char *name, char *password);//用户注册
    void Init();
    void AdjSettings(int num, int lev);
    edicuser();
    ~edicuser();
};

#endif // EDICUSER_H
