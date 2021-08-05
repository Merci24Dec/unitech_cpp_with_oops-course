// Remove Desired Vowel from String in C++

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str[50], vowel;
    int i=0, j, chk;
    cout<<"Enter the String: ";
    gets(str);
    cout<<"Enter the Vowel: ";
    cin>>vowel;
    while(str[i]!='\0')
    {
        chk=0;
        if(str[i]==vowel)
        {
            j=i;
            while(str[j-1]!='\0')
            {
                str[j] = str[j+1];
                j++;
            }
            chk = 1;
        }
        if(chk==0)
            i++;
    }
    cout<<"\nString without '"<<vowel<<"' = "<<str;
    cout<<endl;
    return 0;
}
