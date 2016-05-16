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

vocabulary.GetWords(vector<wordnote> &allwords)----将词库传到一个vector上
vocabulary.Sentence(std::vector<std::string> &allst, std::string word)----将一个单词的例句传到一个vector上

userlearn(std::string name)----获取当前用户
userlearn.Record(std::string word)----将一个单词记为已经记住的
userlearn.Learn(std::string word)----对一个单词进行记忆操作
bool userlearn.CheckWord(std::string word)----判断一个单词是否是已经记住的
userlearn.AddSentence(std::string word, std::string sentence)----为一个单词添加例句
userlearn.Sentence(std::vector<std::string> &allst, std::string word)----将一个单词的例句传到一个vector上
int userlearn.WordRemembered()----用户已经记住的单词数

------------------------------------------------------------------------------------------------------------------------
当前情况：例句需要中文解释吗？