// C++ Print Floyd's Triangle of Given Size

#include<iostream>
using namespace std;
int main()
{
    int i, j, num=1, rowSize;
    cout<<"Enter Row Size: ";
    cin>>rowSize;
    cout<<"\nFloyd's Triangle of "<<rowSize<<" Lines:\n";
    for(i=0; i<rowSize; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
