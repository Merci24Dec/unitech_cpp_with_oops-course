// Decimal to Hexadecimal from 1 to 20

#include<iostream>
using namespace std;
int main()
{
    int decimalNum, rem, i, k;
    char hexaDecimalNum[50];
    cout<<"Decimal Number\tHexadecimal Number\n";
    for(k=1; k<=20; k++)
    {
        decimalNum=k;
        i=0;
        while(decimalNum!=0)
        {
            rem = decimalNum%16;
            if(rem<10)
                rem = rem+48;
            else
                rem = rem+55;
            hexaDecimalNum[i] = rem;
            i++;
            decimalNum = decimalNum/16;
        }
        cout<<k<<"\t\t";
        for(i=i-1; i>=0; i--)
            cout<<hexaDecimalNum[i];
        cout<<endl;
    }
    return 0;
}
