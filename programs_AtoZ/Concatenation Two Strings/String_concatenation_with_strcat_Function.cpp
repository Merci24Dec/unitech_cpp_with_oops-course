// String Concatenation using library function, strcat()

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char strOne[100], strTwo[50];
    cout<<"Enter the First String: ";
    gets(strOne);
    cout<<"Enter the Second String: ";
    gets(strTwo);
    strcat(strOne, strTwo);
    cout<<"\nString after Concatenation: "<<strOne;
    cout<<endl;
    return 0;
}
