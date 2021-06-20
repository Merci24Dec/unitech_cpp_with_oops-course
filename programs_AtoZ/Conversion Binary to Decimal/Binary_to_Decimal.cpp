// C++ Program to Convert Binary to Decimal

#include<iostream>
using namespace std;
int main()
{
    int binnum, decnum=0, i=1, rem;
    cout<<"Enter any Binary Number: ";
    cin>>binnum;
    while(binnum!=0)
    {
        rem = binnum%10;
        decnum = decnum + (rem*i);
        i = i*2;
        binnum = binnum/10;
    }
    cout<<"\nEquivalent Decimal Value = "<<decnum;
    cout<<endl;
    return 0;
}
