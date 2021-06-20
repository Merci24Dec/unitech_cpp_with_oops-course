// Binary to Octal using user-defined Function

#include<iostream>
using namespace std;
void BinaryToOctal(int);
int i=0, octalNum[20];
int main()
{
    int binaryNum;
    cout<<"Enter any Binary Number: ";
    cin>>binaryNum;
    BinaryToOctal(binaryNum);
    cout<<"\nEquivalent Octal Value: ";
    for(i=i; i>=0; i--)
        cout<<octalNum[i];
    cout<<endl;
    return 0;
}
void BinaryToOctal(int binaryNum)
{
    int octalDigit=0, mul=1, chk=1, rem;
    while(binaryNum!=0)
    {
        rem = binaryNum%10;
        octalDigit = octalDigit + (rem*mul);
        if(chk%3==0)
        {
            octalNum[i] = octalDigit;
            mul = 1;
            octalDigit = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        binaryNum = binaryNum/10;
    }
    if(chk!=1)
        octalNum[i] = octalDigit;
}
