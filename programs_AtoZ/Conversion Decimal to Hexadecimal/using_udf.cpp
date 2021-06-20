// C++ Decimal to Hexadecimal using Function

#include<iostream>
using namespace std;
int DecToHexDec(int dec, int);
char hexaDecNum[50];
int main()
{
    int decimalNum, i;
    cout<<"Enter the Decimal Number: ";
    cin>>decimalNum;
    i = DecToHexDec(decimalNum, 0);
    cout<<"\nEquivalent Hexadecimal Value: ";
    for(i=i-1; i>=0; i--)
        cout<<hexaDecNum[i];
    cout<<endl;
    return 0;
}
int DecToHexDec(int dec, int i)
{
    int rem;
    while(dec!=0)
    {
        rem = dec%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexaDecNum[i] = rem;
        i++;
        dec = dec/16;
    }
    return i;
}
