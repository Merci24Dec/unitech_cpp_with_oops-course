// C++ Convert Hexadecimal (including decimal point) to Decimal

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int decimalNum=0, decNumOne=0, dotPosition=0;
	int rem, i=0, len=0, lenTemp;
    float decNumTwo=0;
    char hexDecNum[20];
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    while(hexDecNum[i]!='\0')
    {
        if(hexDecNum[i]=='.')
            dotPosition = i;
        len++;
        i++;
    }
    len--;
    i=0;
    if(dotPosition==0)
    {
        while(len>=0)
        {
            rem = hexDecNum[len];
            if(rem>=48 && rem<=57)
                rem = rem-48;
            else if(rem>=65 && rem<=70)
                rem = rem-55;
            else if(rem>=97 && rem<=102)
                rem = rem-87;
            else
            {
                cout<<"\nInvalid Hex Digit!";
                cout<<endl;
                return 0;
            }
            decimalNum = decimalNum + (rem*pow(16, i));
            len--;
            i++;
        }
        cout<<"\nEquivalent Decimal Value: "<<decimalNum;
    }
    else
    {
        lenTemp = dotPosition-1;
        while(lenTemp>=0)
        {
            rem = hexDecNum[lenTemp];
            if(rem>=48 && rem<=57)
                rem = rem-48;
            else if(rem>=65 && rem<=70)
                rem = rem-55;
            else if(rem>=97 && rem<=102)
                rem = rem-87;
            else
            {
                cout<<"\nInvalid Hex Digit!";
                cout<<endl;
                return 0;
            }
            decNumOne = decNumOne + (rem*pow(16, i));
            lenTemp--;
            i++;
        }
        lenTemp = dotPosition+1;
        i=-1;
        while(lenTemp<=len)
        {
            rem = hexDecNum[lenTemp];
            if(rem>=48 && rem<=57)
                rem = rem-48;
            else if(rem>=65 && rem<=70)
                rem = rem-55;
            else if(rem>=97 && rem<=102)
                rem = rem-87;
            else
            {
                cout<<"\nInvalid Hex Digit!";
                cout<<endl;
                return 0;
            }
            decNumTwo = decNumTwo + (rem*pow(16, i));
            lenTemp++;
            i--;
        }
        decNumTwo = decNumOne+decNumTwo;
        cout<<"\nEquivalent Decimal Value: "<<decNumTwo;
    }
    cout<<endl;
    return 0;
}
