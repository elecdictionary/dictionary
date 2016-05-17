#include "wordnote.h"

int wordnote::getLev() const
{
    return lev;
}

void wordnote::setLev(int value)
{
    lev = value;
}

std::string wordnote::getVoca() const
{
    return voca;
}

void wordnote::setVoca(const std::string &value)
{
    voca = value;
}

std::string wordnote::getPronun() const
{
    return pronun;
}

void wordnote::setPronun(const std::string &value)
{
    pronun = value;
}

std::string wordnote::getCat() const
{
    return cat;
}

void wordnote::setCat(const std::string &value)
{
    cat = value;
}

std::string wordnote::getChinese() const
{
    return chinese;
}

void wordnote::setChinese(const std::string &value)
{
    chinese = value;
}

wordnote::wordnote()
{

}

wordnote::~wordnote()
{

}
