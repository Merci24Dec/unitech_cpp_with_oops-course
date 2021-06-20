// C++ Program to Convert Hexadecimal to Decimal

#include<iostream>
#include<math.h>
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
        if(rem>='0' && rem<='9')
             rem = rem-48;
        else if(rem>='A' && rem<='F')
             rem = rem-55;
        else if(rem>='a' && rem<='f')
             rem = rem-87;
        else
        {
            cout<<"\nInvalid Hex Digit!";
            cout<<endl;
            return 0;
        }
        decimalNum = decimalNum + (rem*pow(16, i));
        len--;
        i++;
    }
    cout<<"\nEquivalent Decimal Value: "<<decimalNum;
    cout<<endl;
    return 0;
}
