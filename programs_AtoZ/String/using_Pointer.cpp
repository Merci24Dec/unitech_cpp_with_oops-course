// C++ Print String using Pointer

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[200], *ptr;
    cout<<"Enter any String: ";
    gets(str);
    ptr = &str[0];
    cout<<"\nYou've entered: ";
    while(*ptr)
    {
        cout<<*ptr;
        ptr++;
    }
    cout<<endl;
    return 0;
}
