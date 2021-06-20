// C++ Program to Convert Binary to Hexadecimal

#include<iostream>
using namespace std;
int main()
{
    int binaryNum, hex=0, mul=1, chk=1, rem, i=0;
    char hexDecNum[20];
    cout<<"Enter any Binary Number: ";
    cin>>binaryNum;
    while(binaryNum!=0)
    {
        rem = binaryNum%10;
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
        binaryNum = binaryNum/10;
    }
    if(chk!=1)
        hexDecNum[i] = hex+48;
    if(chk==1)
        i--;
    cout<<"\nEquivalent Value in Hexadecimal: ";
    for(i=i; i>=0; i--)
        cout<<hexDecNum[i];
    cout<<endl;
    return 0;
}
