char* database.Convert(string str)----将string转换为char*
char* database.Path(const char* folder, char* name, const char* file)----返回一个文件路径

makeuser.GetUser(std::string sname, string scode)-----建立用户
bool makeuser.CheckName(std::string sname)----判重

usermodify(string sname)----获取要更改的用户名
int usermodify.ShowLevel()----当前等级
int usermodify.ShowNum()----当前单词数量
char* usermodify.ShowCode()----当前密码
usermodify.ChangeCode(std::string scode)----获取新密码
usermodify.SetLevel(int level)----获取新等级
usermodify.SetNum(int num)----获取新单词数量
usermodify.SaveCode()----将更改的密码写入用户信息
usermodify.SaveLevNum()----将更改的等级和数量信息写入用户信息

vocabulary.GetWords(std::vector<wordnote> &allwords)----将词库传到一个vector上
vocabulary.Sentence(std::vector<std::string> &allst, std::string word)----将一个单词的例句传到一个vector上
vocabulart.GetWordTypes(std::vector<wordnote> &alltypes)----将各种词型传到一个vector上

userlearn(std::string name)----获取当前用户
userlearn.TempRecord(std::vector<mywordrecord> record)----创建一个临时文件记录当前记忆情况
int userlearn.GetTemp(std::vector<mywordrecord> &record)----将临时文件传出
userlearn.MakeRecord(std::vector<mywordrecord> record)----记录上次记忆情况
userlearn.GetNotRemembered(std::vector<std::string> &words)----传出上次需要复习单词
userlearn.MakeWordInfo(std::vector<mywordrecord> record)----检查并更改单词信息
userlearn.Record(std::string word)----将一个单词存入remembered.info
bool userlearn.CheckWord(std::string word)----判断一个单词是否是之前已经记住的
userlearn.AddSentence(std::string sword, std::string stc)----为一个单词添加例句
userlearn.Sentence(std::vector<std::string> &allst, std::string sword)----将一个单词的例句传到一个vector上
int userlearn.WordRemembered()----用户已经记住的单词数

------------------------------------------------------------------------------------------------------------------------
当前情况：需要添加删除例句功能。
添加接口vocabulary.GetWordTypes(std::vector<wordnote> &alltypes)----将各种词型传到一个vector上
需要将words.txt更换为words1.txt words2.txt wordtypes.txt三个文件作为词库