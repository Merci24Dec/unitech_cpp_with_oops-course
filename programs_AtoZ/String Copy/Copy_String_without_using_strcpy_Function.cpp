// C++ Copy String without using strcpy() Function

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char strOrig[100], strCopy[100], i=0;
    cout<<"Enter the string: ";
    gets(strOrig);
    while(strOrig[i]!='\0')
    {
        strCopy[i] = strOrig[i];
        i++;
    }
    strCopy[i] = '\0';
    cout<<"\nEntered String: "<<strOrig;
    cout<<"\nCopied String: "<<strCopy;
    cout<<endl;
    return 0;
}
