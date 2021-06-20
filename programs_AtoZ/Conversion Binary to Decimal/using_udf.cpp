// Binary to Decimal using Function

#include<iostream>
#include<math.h>
using namespace std;
int BinToDec(int bin);
int main()
{
    int binnum, decnum;
    cout<<"Enter any Binary Number: ";
    cin>>binnum;
    decnum = BinToDec(binnum);
    cout<<"\nEquivalent Decimal Value = "<<decnum;
    cout<<endl;
    return 0;
}
int BinToDec(int bin)
{
    int dec=0, i=0, rem;
    while(bin!=0)
    {
        rem = bin%10;
        dec = dec + rem*pow(2,i);
        i++;
        bin = bin/10;
    }
    return dec;
}
