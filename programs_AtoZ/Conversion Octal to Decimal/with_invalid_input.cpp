// Program to Deal with Invalid Octal Digit

#include<iostream>
using namespace std;
int main()
{
    int octalNum, rem, temp, chk=0;
    cout<<"Enter the Octal Number: ";
    cin>>octalNum;
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
        cout<<"\nEquivalent Decimal Value: "<<decimalNum;
    }
    else
        cout<<"\nInvalid Octal Digit!";
    cout<<endl;
    return 0;
}
