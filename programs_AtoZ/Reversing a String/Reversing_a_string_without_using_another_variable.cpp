//Reversing a string without using another variable 

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[200], ch;
    int len, i=0, j;
    cout<<"Enter the String: ";
    gets(str);
    while(str[i]!='\0')
        i++;
    len = i;
    i = 0;
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
