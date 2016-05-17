#ifndef EDICUSER_H
#define EDICUSER_H

#include <string>
#include "makeuser.h"
#include "usermodify.h"

class edicuser
{
private:
    std::string username;
    int status;//用户状态 是否登录
    int stranum, stralev, wordnum;//难度和数目和已背单词数
    usermodify *userModify;
    makeuser *makeUser;
public:
    bool Login(std::string name, std::string password);//用户登录
    bool UserRegister(std::string name, std::string password);//用户注册
    bool Logout();//用户登出
    bool CheckUserName(std::string name);//判断用户名是否已存在
    void Init();//初始化
    bool AdjSettings(int num, int lev);//调整设置
    bool AddSentences(std::string vocabulary, std::string sentence, std::string chinese);

    edicuser();
    ~edicuser();

    int getWordnum() const;
    int getStranum() const;
    void setStranum(int value);
    int getStralev() const;
    void setStralev(int value);
    std::string getUsername() const;//only can be got(no setting) by other object
    int getStatus() const;
};

#endif // EDICUSER_H
