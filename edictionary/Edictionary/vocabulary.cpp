#include "vocabulary.h"

vocabulary :: vocabulary () {}

void vocabulary :: GetWords(std::vector<wordnote> &allwords)
{
    std::string line;
    std::ifstream fin("words1.txt");
    std::string voca, pronun, cat, chinese;
    //char *commend, *cword;
    wordnote *word;

    while (!fin.eof())
    {
        getline(fin, line);
        int beg=0, pos = 0;
        word = new wordnote;
        for (pos = 0; pos < line.length(); pos++)
            if (line[pos] == '[')
            {
                voca.append(line, 0, pos);

                /*cword = Convert(voca);
                commend = new char[100];
                strcpy(commend, "mkdir words\\");
                strcat(commend, cword);
                system(commend);
                delete commend;
                delete cword;*/

                word->setVoca(voca);
                beg = pos;
                break;
            }
        for (pos; pos < line.length(); pos++)
            if (line[pos] == ']')
            {
                pronun.append(line, beg, pos-beg+1);
                word->setPronun(pronun);
                pronun.clear();
                beg = pos + 1;
                break;
            }
        for (pos = beg; pos < line.length(); pos++)
            if (line[pos] == '.')
            {
                cat.append(line, beg, pos-beg+1);
                word->setCat(cat);
                cat.clear();
                beg = pos + 1;
                break;
            }
        chinese.append(line, beg, line.length()-pos+1);
        word->setChinese(chinese);
        chinese.clear();
        word->setLev(1);
        allwords.push_back(*word);
        voca.clear();
        delete word;
    }
    fin.close();
    fin.open("words2.txt");
    while (!fin.eof())
    {
        getline(fin, line);
        int beg=0, pos = 0;
        word = new wordnote;
        for (pos = 0; pos < line.length(); pos++)
            if (line[pos] == '[')
            {
                voca.append(line, 0, pos);
                word->setVoca(voca);
                beg = pos;
                break;
            }
        for (pos; pos < line.length(); pos++)
            if (line[pos] == ']')
            {
                pronun.append(line, beg, pos-beg+1);
                word->setPronun(pronun);
                pronun.clear();
                beg = pos + 1;
                break;
            }
        for (pos = beg; pos < line.length(); pos++)
            if (line[pos] == '.')
            {
                cat.append(line, beg, pos-beg+1);
                word->setCat(cat);
                cat.clear();
                beg = pos + 1;
                break;
            }
        chinese.append(line, beg, line.length()-pos+1);
        word->setChinese(chinese);
        chinese.clear();
        word->setLev(2);
        allwords.push_back(*word);
        voca.clear();
        delete word;
    }
    fin.close();
    word = NULL;
}

void vocabulary :: GetWordTypes(std::vector<wordnote> &alltypes)
{
    std::ifstream fin("wordtypes.txt");
    std::string voca, chinese;
    wordnote *word;

    while (!fin.eof())
    {
        fin >> voca >> chinese;
        word = new wordnote;
        word->setVoca(voca);
        word->setChinese(chinese);
        alltypes.push_back(*word);
        delete word;
    }
    fin.close();
    word = NULL;
}

void vocabulary :: Sentence(std::vector<mysentences> &allst, std::string word)
{
    char *filename, *cword;
    cword = Convert(word);
    filename = Path("words", cword, "sentence.txt");
    std::ifstream st(filename);
    if (!st)
        return;
    mysentences *stc;
    while (!st.eof())
    {
        stc = new mysentences;
        std::getline(st, stc->English);
        stc->English[stc->English.length()-1] = '\0';
        std::getline(st, stc->Chinese);
        stc->Chinese[stc->Chinese.length()-1] = '\0';
        allst.push_back(*stc);
        delete stc;
    }
}

vocabulary::~vocabulary(){}






