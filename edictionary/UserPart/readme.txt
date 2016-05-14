makeuser.GetUser(string sname, string scode)-----建立用户
bool makeuser.CheckName(string sname)----判重

usermodify(string name)----获取要更改的用户名
usermodify.ChangeCode(string scode)----获取新密码
usermodify.SetLevel(int level)----获取新等级
usermodify.SetNum(int num)----获取新单词数量
usermodify.Save()----将更改写入用户信息