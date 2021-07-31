// C++ Copy String using strcpy() Function

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char strOrig[100], strCopy[100];
    cout<<"Enter the string: ";
    gets(strOrig);
    strcpy(strCopy, strOrig);
    cout<<"\nEntered String: "<<strOrig;
    cout<<"\nCopied String: "<<strCopy;
    cout<<endl;
    return 0;
}
