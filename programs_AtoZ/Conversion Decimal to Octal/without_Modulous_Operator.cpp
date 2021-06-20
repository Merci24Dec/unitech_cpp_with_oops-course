// Decimal to Octal without Modulous Operator

#include<iostream>
using namespace std;
int main()
{
    int decimalNum, octalNum[50], i=0, temp, chk, rem;
    cout<<"Enter any Decimal number: ";
    cin>>decimalNum;
    while(decimalNum!=0)
    {
        temp = decimalNum/8;
        chk = temp*8;
        rem = decimalNum - chk;
        octalNum[i] = rem;
        i++;
        decimalNum = temp;
    }
    cout<<"\nEquivalent Octal Value = ";
    for(i=(i-1); i>=0; i--)
        cout<<octalNum[i];
    cout<<endl;
    return 0;
}
