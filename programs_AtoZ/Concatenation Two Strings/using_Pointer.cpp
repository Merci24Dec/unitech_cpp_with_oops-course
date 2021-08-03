// String Concatenation in C++ using Pointer

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char strOne[100], strTwo[50];
    char *firstString, *secondString;
    cout<<"Enter the First String: ";
    gets(strOne);
    cout<<"Enter the Second String: ";
    gets(strTwo);
    firstString = strOne;
    secondString = strTwo;
    while(*firstString)
        firstString++;
    while(*secondString)
    {
        *firstString = *secondString;
        firstString++;
        secondString++;
    }
    *firstString = '\0';
    cout<<"\nString after Concatenation: "<<strOne;
    cout<<endl;
    return 0;
}
