// C++ Copy String using User-defined Function

#include<iostream>
#include<stdio.h>
using namespace std;
void cpystr(char *, char *);
int main()
{
    char strOrig[100], strCopy[100];
    cout<<"Enter the string: ";
    gets(strOrig);
    cpystr(strOrig, strCopy);
    cout<<"\nEntered String: "<<strOrig;
    cout<<"\nCopied String: "<<strCopy;
    cout<<endl;
    return 0;
}
void cpystr(char *origPtr, char *copPtr)
{
    while(*origPtr)
    {
        *copPtr = *origPtr;
        origPtr++;
        copPtr++;
    }
    *copPtr = '\0';
}
