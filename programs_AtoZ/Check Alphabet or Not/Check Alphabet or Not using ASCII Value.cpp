// Check Alphabet or Not using ASCII Value
#include<iostream>
using namespace std;
int main()
{
    char ch;
    int ascii;
    cout<<"Enter a Character: ";
    cin>>ch;
    ascii = ch;
    cout<<endl;
    if(ascii>=65 && ascii<=90)
        cout<<"It is an Uppercase Alphabet";
    else if(ascii>=97 && ascii<=122)
        cout<<"It is a Lowercase Alphabet";
    else
        cout<<"It is not an Alphabet";
    cout<<endl;
    return 0;
}
