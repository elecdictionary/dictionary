#include "wordnote.h"

int Wordnote::getLev() const
{
    return lev;
}

void Wordnote::setLev(int value)
{
    lev = value;
}

std::string Wordnote::getVoca() const
{
    return voca;
}

void Wordnote::setVoca(const std::string &value)
{
    voca = value;
}

std::string Wordnote::getPronun() const
{
    return pronun;
}

void Wordnote::setPronun(const std::string &value)
{
    pronun = value;
}

std::string Wordnote::getCat() const
{
    return cat;
}

void Wordnote::setCat(const std::string &value)
{
    cat = value;
}

std::string Wordnote::getChinese() const
{
    return chinese;
}

void Wordnote::setChinese(const std::string &value)
{
    chinese = value;
}

Wordnote::Wordnote()
{

}
