// C++ Print Full Pyramid Pattern of Stars
#include<iostream>
using namespace std;
int main()
{
    int i, space, j;
    for(i=1; i<=6; i++)
    {
        for(space=6; space>i; space--)
            cout<<" ";
        for(j=0; j<i; j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
