// Decimal to Octal using User-defined Function

#include<iostream>
using namespace std;
void DecimalToOctal(int);
int octalNum[50];
static int i;
int main()
{
    int decimalNum;
    cout<<"Enter any Decimal number: ";
    cin>>decimalNum;
    DecimalToOctal(decimalNum);
    cout<<"\nEquivalent Octal Value = ";
    for(i=(i-1); i>=0; i--)
        cout<<octalNum[i];
    cout<<endl;
    return 0;
}
void DecimalToOctal(int decimalNum)
{
    while(decimalNum != 0)
    {
        octalNum[i] = decimalNum%8;
        i++;
        decimalNum = decimalNum/8;
    }
