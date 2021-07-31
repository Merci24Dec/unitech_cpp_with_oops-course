// C++ Find Length of String without strlen() Function

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[200];
    int len=0, i=0;
    cout<<"Enter the String: ";
    gets(str);
    while(str[i])
    {
        len++;
        i++;
    }
    cout<<"\nLength = "<<len;
    cout<<endl;
    return 0;
}
