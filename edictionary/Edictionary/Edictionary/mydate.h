#ifndef MYDATE_H
#define MYDATE_H


class mydate
{
private:
    int year, month, day;
public:
    void GetDate();

    mydate();
    ~mydate();

    int getYear() const;
    int getMonth() const;
    int getDay() const;
};

#endif // MYDATE_H
