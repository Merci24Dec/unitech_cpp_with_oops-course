// C++ Program to Convert Hexadecimal to Decimal

#include<iostream>
using namespace std;
int main()
{
    int decimalNum=0, rem, i=0, len=0;
    char hexDecNum[20];
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    while(hexDecNum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexDecNum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
            return 0;
        }
        k=1;mul=1;
        while(k<=i)
        {
             mul=16*mul;
             k++;
        }
        decimalNum = decimalNum + (rem*mul);
        len--;
        i++;
    }
    cout<<"\nEquivalent Decimal Value: "<<decimalNum;
    cout<<endl;
    return 0;
}
