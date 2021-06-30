// C++ Program to Print Diamond Pattern of Alphabet characters.

#include<iostream>
using namespace std;
int main()
{
    int i, j, rowNum, space;
    char ch='A';
    cout<<"Enter the Number of Rows: ";
    cin>>rowNum;
    space = rowNum-1;
    for(i=1; i<=rowNum; i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space--;
        for(j=1; j<=(2*i-1); j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
        ch = 'A';
    }
    space = 1;
    for(i=1; i<=(rowNum-1); i++)
    {
        for(j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(j=1; j<=(2*(rowNum-i)-1); j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
        ch = 'A';
    }
    cout<<endl;
    return 0;
}
