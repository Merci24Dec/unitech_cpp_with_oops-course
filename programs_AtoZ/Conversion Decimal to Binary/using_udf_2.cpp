// C++ Decimal to Binary using user-defined Function

#include<iostream>
using namespace std;
int DecimalToBinary(int, int);
int binaryNum[20];
int main()
{
    int decimalNum, i;
    cout<<"Enter the Decimal Number: ";
    cin>>decimalNum;
    i = DecimalToBinary(decimalNum, 0);
    cout<<"\nEquivalent Binary Value: ";
    for(i=(i-1); i>=0; i--)
        cout<<binaryNum[i];
    cout<<endl;
    return 0;
}
int DecimalToBinary(int decimalNum, int i)
{
    while(decimalNum!=0)
    {
        binaryNum[i] = decimalNum%2;
        i++;
        decimalNum = decimalNum/2;
    }
    return i;
}
