// C++ Reverse a String using for Loop

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[200], ch;
    int i, j, len;
    cout<<"Enter the String: ";
    gets(str);
    len = strlen(str);
    j = len-1;
    for(i=0; i<j; i++, j--)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
    cout<<"\nReverse = "<<str;
    cout<<endl;
    return 0;
}
