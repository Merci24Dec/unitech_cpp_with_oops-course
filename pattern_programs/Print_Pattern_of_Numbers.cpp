// C++ Print Pattern of Numbers
#include<iostream>
using namespace std;
int main()
{
    int i, j, num;
    for(i=0; i<6; i++)
    {
        num=1;
        for(j=0; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
