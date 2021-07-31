// Compare Two Strings using strcmp() function

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[50], str2[50];
    int len1, len2;
    cout<<"Enter the First String: ";
    cin>>str1;
    cout<<"Enter the Second String: ";
    cin>>str2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1==len2)
    {
      if(strcmp(str1, str2)==0)
        cout<<"\nStrings are Equal";
      else
        cout<<"\nStrings are not Equal";
    }
    else
        cout<<"\nStrings are not Equal";
    cout<<endl;
    return 0;
}
