#include "kmp_arithmetic.h"
#include "qstring.h"

KMP_Arithmetic::KMP_Arithmetic()
{

}
void KMP_Arithmetic::Next(char *T, int *next){
    int i = 1;
       next[1] = 0;
       int j = 0;
       while (i < strlen(T))
       {
           if (j == 0 || T[i - 1] == T[j - 1])
           {
               i++;
               j++;
               if (T[i - 1] != T[j - 1])
               {
                   next[i] = j;
               }
               else
               {
                   next[i] = next[j];
               }

               //next[i]=j;
           }
           else
           {
               j = next[j]; //比较反人类的一句
           }
       }
}
int KMP_Arithmetic::KMP( char *S, char *T)
{
    int next[strlen(T)+1];
    Next(T, next); //根据模式串T,初始化next数组
    int i = 1;
    int j = 1;
    while (i <= strlen(S) && j <= strlen(T))
    {
        //j==0；代表模式串的第一个字符就和指针i指向的字符不相等；
        //S[i-1]==T[j-1],如果对应位置字符相等，两种情况下，
        //指向当前测试的两个指针下表i和j都向后移动
        if (j == 0 || S[i - 1] == T[j - 1])
        {
            j++;
            i++;
        }
        else
        {
            j = next[j]; //如果测试两个字符不相等，i不动，j变为当前测试字符串的next值
        }
    }
    if (j > strlen(T))
    {
        return i - (int)strlen(T);
    }
    return -1;
}
