// Check Vowel or Consonant in C++

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Character: ";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        int lowerVowel, upperVowel;
        lowerVowel = (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
        upperVowel = (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
        if(lowerVowel)
            cout<<"\nIt is a lowercase Vowel";
        else if(upperVowel)
            cout<<"\nIt is an uppercase Vowel";
        else
            cout<<"\nIt is a Consonant";
    }
    else
        cout<<"\nIt is neither Vowel nor Consonant";
    cout<<endl;
    return 0;
}
