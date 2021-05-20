// C++ Program to Print Star Pattern
#include<iostream>
using namespace std;
int main()
{
    int i, j, space=20, k=1;
    for(i=0; i<6; i++)
    {
        for(j=0; j<space; j++)
            cout<<" ";
        space = space-4;
        for(j=0; j<k; j++)
            cout<<"* ";
        k = k+2;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
