// C++ Print Table in a Given Range

#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, num, i, j, res;
    cout<<"Enter the Range: ";
    cin>>numOne>>numTwo;
    cout<<"--------Table from "<<numOne<<" to "<<numTwo<<"--------\n\n";
    for(i=numOne; i<=numTwo; i++)
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
