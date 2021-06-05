// C++ Program to Print Table of 2

#include<iostream>
using namespace std;
int main()
{
    int num=2, i, res;
    for(i=1; i<=10; i++)
    {
        res = num*i;
        cout<<num<<" * "<<i<<" = "<<res;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
