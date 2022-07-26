#include<iostream>
#include "string.h"
using namespace std;
 int numberOfCharacter(char *str , char searchcharacter)
{
    int i =0 , times = 0;
    for(i=0;str[i]!='\0' ;++i)
    {
        if(searchcharacter == str[i])
            ++times;
    }
    return times;

}

int lengthOfstring(char *source)
{
    int l = 0;
    for(l=0;source[l]!= '\0';++l);
    return l;
}

int strConcat(char *str1 , char *str2)
{
    int i=0 , j= '\0';
    for(i=0;str1[i]!='\0';++i);// calculate the length of string str1 and store it in i
    for(j=0;str2[j]!='\0';++j,++i)// concatenate s2 to s1
    {
        str1[i]=str2[j];
    }
    str1[i] = '\0'; //terminating the s1 string
    return 0;
}

int strCopy(char *source , char *destination)
{
    int  i;
    while(source[i] != '\0')
    {
        destination[i]= source[i];
    }
    // for(i=0;source[i]!='\0';++i)
    // {
    //     destination[i] = source[i];
    // }
    destination[i]= '\0';
    return 0;
}
