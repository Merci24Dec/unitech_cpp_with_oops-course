// C++ Reverse a String using while Loop

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
    i = 0;
    len = strlen(str);
    j = len-1;
    while(i<j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i++;
        j--;
    }
    cout<<"\nReverse = "<<str;
    cout<<endl;
    return 0;
}
