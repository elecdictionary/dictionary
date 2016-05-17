#include "vocabulary.h"

void vocabulary :: GetWords(std::vector<wordnote> &allwords)
{
    std::string line;
    std::ifstream words("words.txt");
    std::string voca, pronun, cat, chinese;
    wordnote *word;
    while (getline(words, line))
    {
        int beg=0, pos = 0;
        word = new wordnote;
        for (pos; pos < line.length(); pos++)
            if (line[pos] == '[')
            {
                voca.append(line, 0, pos);
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

vocabulary::vocabulary()
{

}

vocabulary::~vocabulary()
{

}
