#include "makeuser.h"
#include <memory.h>

class usermodify : public makeuser{
private:
    char *newcode, *username;
public:
    void ChangeCode(std::string scode);
    void SetLevel(int level);
    void SetNum(int num);
    void Save();
    usermodify(std::string sname);
    ~usermodify();
};
