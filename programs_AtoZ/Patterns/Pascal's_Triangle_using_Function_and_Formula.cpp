// C++ Pascal's Triangle using Function and Formula

#include<iostream>
using namespace std;
long int fact(int);
int main()
{
    int i, c;
    for(i=0; i<5; i++)
    {
        for(c=4; c>i; c--)
            cout<<" ";
        for(c=0; c<=i; c++)
            cout<<fact(i)/(fact(c)*fact(i-c))<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
long int fact(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
        f = f*i;
    return f;
}
