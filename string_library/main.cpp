#include<iostream>
#include "string.h"
using namespace std;
class STR_L
{
    public:
    char temp[50] = "Dubey";
    char temp2[50] = "hii";
    char temp3[100];
    int numOfchar()
    {
      cout<<"number of 'i' in hi is \n"<<numberOfCharacter(temp2, 'i')<<endl;  
    }
    int  strlen()
    {
        cout<<"string length is \n"<<lengthOfstring(temp)<<endl;
    }
    int strconcat()
    {
        strConcat(temp2 , temp);
        cout<<"string temp concatened with string tem2 \n"<<temp2<<endl;
    }
    int stringcopy()
    {
        strCopy(temp ,temp3);
        cout<<"copying temp to destination \n"<<temp3<<endl; 
    }


};

int main()
{
    STR_L s1 ;
    s1.numOfchar();
    s1.strlen();
    s1.strconcat();
    s1.stringcopy();
    // char temp[] = "Dubey";
    // char temp2[] = "hii";
    // char temp3[100];
    // cout<<"number of 'i' in hi is \n"<<numberOfCharacter(temp2, 'i')<<endl;
    // cout<<"string length is \n"<<lengthOfstring(temp)<<endl;
    // strConcat(temp2 , temp);
    // cout<<"string temp concatened with string tem2 \n"<<temp2<<endl;
    // strCopy(temp ,temp3);
    // cout<<"copying temp to destination \n"<<temp3<<endl;

    return 0;
}