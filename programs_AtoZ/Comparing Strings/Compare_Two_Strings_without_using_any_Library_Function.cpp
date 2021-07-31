// Compare Two Strings without using any Library Function

#include<iostream>
using namespace std;
int main()
{
    char str1[50], str2[50];
    int i, chk=0, len1=0, len2=0;
    cout<<"Enter the First String: ";
    cin>>str1;
    cout<<"Enter the Second String: ";
    cin>>str2;
    i=0;
    while(str1[i]!='\0')
    {
        len1++;
        i++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        len2++;
        i++;
    }
    if(len1==len2)
    {
        i=0;
        while(str1[i]!='\0' || str2[i]!='\0')
        {
            if(str1[i]!=str2[i])
            {
                chk = 1;
                break;
            }
            i++;
      }
      if(chk==0)
        cout<<"\nStrings are Equal";
      else
        cout<<"\nStrings are not Equal";
    }
    else
        cout<<"\nString Length must has to be same, to Compare!";
    cout<<endl;
    return 0;
}
