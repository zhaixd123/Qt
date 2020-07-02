#ifndef KMP_ARITHMETIC_H
#define KMP_ARITHMETIC_H

#include "string.h"

class KMP_Arithmetic
{
public:
    KMP_Arithmetic();
    int KMP(char *S,char *T);
private:
    void Next(char *T,int *next);

};

#endif // KMP_ARITHMETIC_H
