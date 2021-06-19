// Decimal to Binary without using Array  

#include<iostream>
using namespace std;
int main()
{
    int decimalNum, binaryNum=0, mul=1, rem;
    cout<<"Enter the Decimal Number: ";
    cin>>decimalNum;
    while(decimalNum>0)
    {
        rem = decimalNum%2;
        binaryNum = binaryNum+(rem*mul);
        mul = mul*10;
        decimalNum = decimalNum/2;
    }
    cout<<"\nEquivalent Binary Value: "<<binaryNum;
    cout<<endl;
    return 0;
}
