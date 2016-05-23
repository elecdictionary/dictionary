#include "myrand.h"

int MyRand(int num)
{
    int ret = 0, pow = 1;
    for(int i = 1; i <= 8; i ++)
    {
        ret += rand() % 10 * pow;
        pow *= 10;
    }
    return ret % num;
}
