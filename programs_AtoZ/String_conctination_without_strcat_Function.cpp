// String Concatenation in C++ without strcat() Function

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char strOne[100], strTwo[50], i, j=0;
    cout<<"Enter the First String: ";
    gets(strOne);
    cout<<"Enter the Second String: ";
    gets(strTwo);
    for(i=0; strOne[i]!='\0'; i++)
        j++;
    for(i=0; strTwo[i]!='\0'; i++)
    {
        strOne[j] = strTwo[i];
        j++;
    }
    strOne[j] = '\0';
    cout<<"\nString after Concatenation: "<<strOne;
    cout<<endl;
    return 0;
}
