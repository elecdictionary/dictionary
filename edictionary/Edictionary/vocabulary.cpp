#include "vocabulary.h"

void vocabulary :: GetWords(std::vector<wordnote> &allwords)
{
    std::string line;
    std::ifstream fin("words.txt");
    std::string voca, pronun, cat, chinese;
    char *commend, *cword;
    wordnote *word;
    while (getline(fin, line))
    {
        int beg=0, pos = 0;
        word = new wordnote;
        for (pos; pos < line.length(); pos++)
            if (line[pos] == '[')
            {
                voca.append(line, 0, pos);

                cword = Convert(voca);
                commend = new char[100];
                strcpy(commend, "mkdir words\\");
                strcat(commend, cword);
                system(commend);
                delete commend;
                delete cword;

                word->setVoca(voca);
                voca.clear();
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
        if (voca.length()>6)
            word->setLev(2);
            else
                word->setLev(1);
        allwords.push_back(*word);
        delete word;
    }
    word = NULL;
}

void vocabulary :: Sentence(std::vector<std::string> &allst, std::string word)
{
    char *filename, *cword;
    cword = Convert(word);
    filename = Path("words", cword, "sentence.txt");
    std::ifstream st(filename);
    if (!st)
        return;
    std::string stc;
    while (!st.eof())
    {
        std::getline(st, stc);
        stc[stc.length()-1] = '\0';
        allst.push_back(stc);
        stc.clear();
    }
}

vocabulary::vocabulary()
{

}

vocabulary::~vocabulary(){}






