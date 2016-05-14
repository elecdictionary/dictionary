#ifndef WORDNOTE_H
#define WORDNOTE_H

#include <string>

class Wordnote
{
private:
    std::string voca, pronun, cat, chinese;
    int lev;
public:
    Wordnote();
    int getLev() const;
    void setLev(int value);
    std::string getVoca() const;
    void setVoca(const std::string &value);
    std::string getPronun() const;
    void setPronun(const std::string &value);
    std::string getCat() const;
    void setCat(const std::string &value);
    std::string getChinese() const;
    void setChinese(const std::string &value);
};

#endif // WORDNOTE_H
