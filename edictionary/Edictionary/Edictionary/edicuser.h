#ifndef EDICUSER_H
#define EDICUSER_H

#include <string>
#include "makeuser.h"
#include "usermodify.h"
#include "allstruct.h"
#include "userlearn.h"
#include "mylog.h"

class edicuser
{
private:
    std::string username;
    int status;//用户状态 是否登录
    int stranum, stralev, wordnum;//难度和数目和已背单词数
    usermodify *userModify;
    makeuser *makeUser;
    userlearn *userLearn;

public:
    bool Login(std::string name, std::string password);//用户登录
    bool UserRegister(std::string name, std::string password);//用户注册
    bool Logout();//用户登出
    bool CheckUserName(std::string name);//判断用户名是否已存在
    void Init();//初始化
    bool AdjSettings(int num, int lev);//调整设置
    bool ChangePassword(std::string formalpassword, std::string newpassword);//修改密码
    bool AddSentences(std::string vocabulary, std::string sentence, std::string chinese);//用户添加例句
    bool TempSave(std::vector<mywordrecord> wordtest);//临时保存背单词信息
    bool FinalSave(std::vector<mywordrecord> testinfo);//背单词结束时保存所背单词信息
    bool CheckRecited(std::string vocabulary);//判断单词是否彻底记住
    int GetTempRecord(std::vector<mywordrecord> &temprecord);//提取当天任务情况
    bool GetLasttimeVocabulary(std::vector<std::string> &lasttimevocabulary);//获取需要复习的单词
    bool GetSentences(std::string vocabulary, std::vector<mysentences> &sentences);

    edicuser();
    ~edicuser();

    int getWordnum() const;
    int getStranum();
    void setStranum(int value);
    int getStralev();
    void setStralev(int value);
    std::string getUsername() const;//only can be got(no setting) by other object
    int getStatus() const;
};

#endif // EDICUSER_H
