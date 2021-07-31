// C++ Find Length of String using Pointer

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[200], *ptr;
    int len=0;
    cout<<"Enter the String: ";
    gets(str);
    ptr = &str[0];
    while(*ptr)
    {
        len++;
        ptr++;
    }
    cout<<"\nLength = "<<len;
    cout<<endl;
    return 0;
}
