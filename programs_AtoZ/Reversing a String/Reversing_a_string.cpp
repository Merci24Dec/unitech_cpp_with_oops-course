// C++ Program to Reverse a String

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[200], strTemp[200];
    int len, i=0;
    cout<<"Enter the String: ";
    gets(str);
    while(str[i]!='\0')
        i++;
    len = i;
    strTemp[len] = '\0';
    len--;
    i = 0;
    while(str[i]!='\0')
    {
        strTemp[len] = str[i];
        i++;
        len--;
    }
    i=0;
    while(strTemp[i]!='\0')
    {
        str[i] = strTemp[i];
        i++;
    }
    cout<<"\nReverse = "<<str;
    cout<<endl;
    return 0;
}
