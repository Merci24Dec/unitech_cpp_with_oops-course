// C++ Find Length of String using strlen() Function

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[200];
    int len=0;
    cout<<"Enter the String: ";
    gets(str);
    len = strlen(str);
    cout<<"\nLength = "<<len;
    cout<<endl;
    return 0;
}
