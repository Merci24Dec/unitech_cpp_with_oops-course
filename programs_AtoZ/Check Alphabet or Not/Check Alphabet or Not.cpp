// C++ Program to Check Alphabet or Not
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character: ";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        cout<<endl<<ch<<" is an Alphabet";
    else
        cout<<endl<<ch<<" isn't an Alphabet";
    cout<<endl;
    return 0;
}
