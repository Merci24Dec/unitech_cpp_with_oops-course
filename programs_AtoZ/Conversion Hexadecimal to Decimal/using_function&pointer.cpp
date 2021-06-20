#include<iostream>
#include<math.h>
using namespace std;
unsigned long HexDecToDec(char []);
int main()
{
    unsigned long decimalNum;
    char hexDecNum[10];
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    decimalNum = HexDecToDec(hexDecNum);
    if(decimalNum==0)
        cout<<"\nInvalid Hex Digit!";
    else
        cout<<"\nEquivalent Decimal Value: "<<decimalNum;
    cout<<endl;
    return 0;
}
unsigned long HexDecToDec(char hexDecNum[])
{
    char *hexDecPointer;
    int i, len = 0;
    const int base = 16;
    unsigned long decimalNum = 0;
    // Find the len of Hexadecimal Number
    for(hexDecPointer=hexDecNum; *hexDecPointer != '\0'; hexDecPointer++)
        len++;
    // Again initialize the starting address of Hexadecimal Number
    hexDecPointer = hexDecNum;
    // Now convert hex digit to decimal number one by one
    for(i=0; *hexDecPointer != '\0' || i<len; i++, hexDecPointer++)
    {
        if(*hexDecPointer>=48 && *hexDecPointer<=57)
            decimalNum = decimalNum + (*hexDecPointer - 48)*pow(base, len-i-1);
        else if(*hexDecPointer>=65 && *hexDecPointer<=70)
            decimalNum = decimalNum + (*hexDecPointer - 55)*pow(base, len-i-1);
        else if(*hexDecPointer>=97 && *hexDecPointer<=102)
            decimalNum = decimalNum + (*hexDecPointer - 87)*pow(base, len-i-1);
        else
            len=0;
    }
    if(len==0)
        return 0;
    else
        return decimalNum;
}
