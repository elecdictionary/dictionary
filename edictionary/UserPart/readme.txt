char* database.Convert(string str)----��stringת��Ϊchar*
char* database.Path(const char* folder, char* name, const char* file)----����һ���ļ�·��

makeuser.GetUser(std::string sname, string scode)-----�����û�
bool makeuser.CheckName(std::string sname)----����

usermodify(string sname)----��ȡҪ���ĵ��û���
int usermodify.ShowLevel()----��ǰ�ȼ�
int usermodify.ShowNum()----��ǰ��������
char* usermodify.ShowCode()----��ǰ����
usermodify.ChangeCode(std::string scode)----��ȡ������
usermodify.SetLevel(int level)----��ȡ�µȼ�
usermodify.SetNum(int num)----��ȡ�µ�������
usermodify.SaveCode()----�����ĵ�����д���û���Ϣ
usermodify.SaveLevNum()----�����ĵĵȼ���������Ϣд���û���Ϣ

vocabulary.GetWords(std::vector<wordnote> &allwords)----���ʿ⴫��һ��vector��
vocabulary.Sentence(std::vector<std::string> &allst, std::string word)----��һ�����ʵ����䴫��һ��vector��
vocabulart.GetWordTypes(std::vector<wordnote> &alltypes)----�����ִ��ʹ���һ��vector��

userlearn(std::string name)----��ȡ��ǰ�û�
userlearn.TempRecord(std::vector<mywordrecord> record)----����һ����ʱ�ļ���¼��ǰ�������
int userlearn.GetTemp(std::vector<mywordrecord> &record)----����ʱ�ļ�����
userlearn.MakeRecord(std::vector<mywordrecord> record)----��¼�ϴμ������
userlearn.GetNotRemembered(std::vector<std::string> &words)----�����ϴ���Ҫ��ϰ����
userlearn.MakeWordInfo(std::vector<mywordrecord> record)----��鲢���ĵ�����Ϣ
userlearn.Record(std::string word)----��һ�����ʴ���remembered.info
bool userlearn.CheckWord(std::string word)----�ж�һ�������Ƿ���֮ǰ�Ѿ���ס��
userlearn.AddSentence(std::string sword, std::string stc)----Ϊһ�������������
userlearn.Sentence(std::vector<std::string> &allst, std::string sword)----��һ�����ʵ����䴫��һ��vector��
int userlearn.WordRemembered()----�û��Ѿ���ס�ĵ�����

------------------------------------------------------------------------------------------------------------------------
��ǰ�������Ҫ���ɾ�����书�ܡ�
��ӽӿ�vocabulary.GetWordTypes(std::vector<wordnote> &alltypes)----�����ִ��ʹ���һ��vector��
��Ҫ��words.txt����Ϊwords1.txt words2.txt wordtypes.txt�����ļ���Ϊ�ʿ�