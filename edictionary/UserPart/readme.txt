char* database.Convert(string str)----将string转换为char*
char* database.Path(const char* folder, char* name, const char* file)----返回一个文件路径

makeuser.GetUser(string sname, string scode)-----建立用户
bool makeuser.CheckName(string sname)----判重

usermodify(string name)----获取要更改的用户名
int usermodify.ShowLevel()----当前等级
int usermodify.ShowNum()----当前单词数量
char* usermodify.ShowCode()----当前密码
usermodify.ChangeCode(string scode)----获取新密码
usermodify.SetLevel(int level)----获取新等级
usermodify.SetNum(int num)----获取新单词数量
usermodify.Save()----将更改写入用户信息


------------------------------------------------------------------------------------------------------------------------
当前情况：user部分接口写好了，vocabulary部分的接口正在写。还是不明白如何将词库返回到一个vector里面。