#ifndef EDICUSER_H
#define EDICUSER_H


class edicuser
{
private:
    char username[30];
    int status;//用户状态 是否登录
public:
    bool Login(char *name, char *password);//用户登录
    bool Userregister(char *name, char *password);//用户注册
    edicuser();
    ~edicuser();
};

#endif // EDICUSER_H
