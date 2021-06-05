// C++ Print Table from 1 to 10

#include<iostream>
using namespace std;
int main()
{
    int num, i, j, res;
    cout<<"-----------Table from 1 to 10--------\n\n";
    for(i=1; i<=10; i++)
    {
        num = i;
        cout<<"Table of "<<num<<": ";
        for(j=1; j<=10; j++)
        {
            res = num*j;
            cout<<res<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
