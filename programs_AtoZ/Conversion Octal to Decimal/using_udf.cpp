// Octal to Decimal using User-defined Function

#include<iostream>
using namespace std;
int OctalToDecimal(int);
int main()
{
    int octalNum, decimalNum;
    cout<<"Enter the Octal Number: ";
    cin>>octalNum;
    decimalNum = OctalToDecimal(octalNum);
    if(decimalNum==0)
        cout<<"\nInvalid Octal Digit!";
    else
        cout<<"\nEquivalent Decimal Value: "<<decimalNum;
    cout<<endl;
    return 0;
}
int OctalToDecimal(int octalNum)
{
    int temp, rem, chk=0;
    temp = octalNum;
    while(temp!=0)
    {
        rem = temp%10;
        if(rem>=8)
        {
            chk++;
            break;
        }
        temp = temp/10;
    }
    if(chk==0)
    {
        int decimalNum=0, mul=1;
        while(octalNum!=0)
        {
            rem = octalNum%10;
            decimalNum = decimalNum + (rem*mul);
            mul = mul*8;
            octalNum = octalNum/10;
        }
        return decimalNum;
    }
    else
        return 0;
}
