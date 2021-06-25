// C++ Print Inverted Full Pyramid Pattern using Stars

#include<iostream>
using namespace std;
int main()
{
    int i, space, j;
    for(i=1; i<=6; i++)
    {
        for(space=1; space<i; space++)
            cout<<" ";
        for(j=i; j<=6; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
