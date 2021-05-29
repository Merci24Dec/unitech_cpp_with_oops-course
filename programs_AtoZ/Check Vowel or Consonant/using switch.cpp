// Check Vowel or Consonant using switch

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter an Alphabet: ";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout<<"\nIt is a Vowel";
            break;
        default:
            cout<<"\nIt is a Consonant";
            break;
    }
    cout<<endl;
    return 0;
}
