char* database.Convert(string str)----��stringת��Ϊchar*
char* database.Path(const char* folder, char* name, const char* file)----����һ���ļ�·��

makeuser.GetUser(string sname, string scode)-----�����û�
bool makeuser.CheckName(string sname)----����

usermodify(string sname)----��ȡҪ���ĵ��û���
int usermodify.ShowLevel()----��ǰ�ȼ�
int usermodify.ShowNum()----��ǰ��������
char* usermodify.ShowCode()----��ǰ����
usermodify.ChangeCode(string scode)----��ȡ������
usermodify.SetLevel(int level)----��ȡ�µȼ�
usermodify.SetNum(int num)----��ȡ�µ�������
usermodify.Save()----������д���û���Ϣ

vocabulary.GetWords(vector<wordnote> &allwords)----���ʿ⴫��һ��vector��
vocabulary.Sentence(std::vector<std::string> &allst, std::string word)----��һ�����ʵ����䴫��һ��vector��

userlearn(std::string name)----��ȡ��ǰ�û�
userlearn.Record(std::string word)----��һ�����ʼ�Ϊ�Ѿ���ס��
userlearn.Learn(std::string word)----��һ�����ʽ��м������
bool userlearn.CheckWord(std::string word)----�ж�һ�������Ƿ����Ѿ���ס��
userlearn.AddSentence(std::string sword, std::string stc)----Ϊһ�������������
userlearn.Sentence(std::vector<std::string> &allst, std::string sword)----��һ�����ʵ����䴫��һ��vector��
int userlearn.WordRemembered()----�û��Ѿ���ס�ĵ�����

------------------------------------------------------------------------------------------------------------------------
��ǰ���������һ�����ʣ���ҪRecord֮�����Check�����Ѿ���ס�ġ��ļ�������system������ģ�windowsӦ���ܵù��ˡ�
