// Binary to Hexadecimal Conversion using Function

#include<iostream>
using namespace std;

void BinaryToHexaDec(int bin);
int i=0;
char hexDecNum[20];
int main()
{
    int binaryNum;
    cout<<"Enter any Binary Number: ";
    cin>>binaryNum;
    BinaryToHexaDec(binaryNum);
    cout<<"\nEquivalent Value in Hexadecimal: ";
    for(i=i; i>=0; i--)
        cout<<hexDecNum[i];
    cout<<endl;
    return 0;
}
void BinaryToHexaDec(int bin)
{
    int hex=0, mul=1, chk=1, rem;
    while(bin!=0)
    {
        rem = bin%10;
        hex = hex + (rem*mul);
        if(chk%4==0)
        {
            if(hex<10)
                hexDecNum[i] = hex+48;
            else
                hexDecNum[i] = hex+55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        bin = bin/10;
    }
    if(chk!=1)
        hexDecNum[i] = hex+48;
    if(chk==1)
        i--;
}
