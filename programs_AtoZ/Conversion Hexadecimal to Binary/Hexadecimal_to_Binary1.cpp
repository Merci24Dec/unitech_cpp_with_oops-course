// C++ Program to Convert Hexadecimal to Binary

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i=0, chk=0;
    char hexDecNum[10], binaryNum[40]="";
    cout<<"Enter the Hexadecimal Number: ";
    cin>>hexDecNum;
    while(hexDecNum[i])
    {
        switch(hexDecNum[i])
        {
            case '0':
                strcat(binaryNum, "0000");
                break;
            case '1':
                strcat(binaryNum, "0001");
                break;
            case '2':
                strcat(binaryNum, "0010");
                break;
            case '3':
                strcat(binaryNum, "0011");
                break;
            case '4':
                strcat(binaryNum, "0100");
                break;
            case '5':
                strcat(binaryNum, "0101");
                break;
            case '6':
                strcat(binaryNum, "0110");
                break;
            case '7':
                strcat(binaryNum, "0111");
                break;
            case '8':
                strcat(binaryNum, "1000");
                break;
            case '9':
                strcat(binaryNum, "1001");
                break;
            case 'A':
            case 'a':
                strcat(binaryNum, "1010");
                break;
            case 'B':
            case 'b':
                strcat(binaryNum, "1011");
                break;
            case 'C':
            case 'c':
                strcat(binaryNum, "1100");
                break;
            case 'D':
            case 'd':
                strcat(binaryNum, "1101");
                break;
            case 'E':
            case 'e':
                strcat(binaryNum, "1110");
                break;
            case 'F':
            case 'f':
                strcat(binaryNum, "1111");
                break;
            default:
                chk = 1;
                break;
        }
        i++;
    }
    if(chk==0)
        cout<<"\nEquivalent Binary Value: "<<binaryNum;
    else
        cout<<"\nInvalid Hexadecimal Digit";
    cout<<endl;
    return 0;
}
