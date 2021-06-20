// HexaDecimal to Octal using User-defined Function

#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int HexDecToOct(char []);
int main()
{
    char hexDecNum[10], octNum;
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    octNum = HexDecToOct(hexDecNum);
    if(octNum==0)
        cout<<"\nInvalid Hex Digit!";
    else
        cout<<"\nEquivalent Octal Value: "<<HexDecToOct(hexDecNum);
    cout<<endl;
    return 0;
}
int HexDecToOct(char hexDecNum[])
{
    int i, len=0, decNum=0, octNum=0;
    len = strlen(hexDecNum);
    len--;
    for(i=0; hexDecNum[i]!='\0'; i++, len--)
    {
        if(hexDecNum[i]>='0' && hexDecNum[i]<='9')
            decNum = decNum + (hexDecNum[i]-48)*pow(16,len);
        else if(hexDecNum[i]>='A' && hexDecNum[i]<='F')
            decNum = decNum + (hexDecNum[i]-55)*pow(16,len);
        else if(hexDecNum[i]>='a' && hexDecNum[i]<='f')
            decNum = decNum + (hexDecNum[i]-87)*pow(16,len);
        else
            return 0;
    }
    i=1;
    while(decNum!=0)
    {
        octNum = octNum + (decNum%8)*i;
        i = i*10;
        decNum = decNum/8;
    }
    return octNum;
}
