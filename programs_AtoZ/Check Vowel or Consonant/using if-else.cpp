// C++ Program to Check Vowel or Consonant using if-else

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter an Alphabet: ";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        cout<<"\nIt is a Vowel";
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        cout<<"\nIt is a Vowel";
    else
        cout<<"\nIt is a Consonant";
    cout<<endl;
    return 0;
}
