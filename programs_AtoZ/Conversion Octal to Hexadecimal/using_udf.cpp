// Octal to Hexadecimal using user-defined Function

#include<iostream>
#include<string.h>
int reverseNum(int);
void octalToHexa(int);
static int chk, i;
char hexnum[40];
using namespace std;
int main()
{
    int octalNum;
    cout<<"Enter any Octal Number: ";
    cin>>octalNum;
    octalToHexa(octalNum);
    if(chk!=0)
    {
        cout<<"\nEquivalent Hexadecimal Value = ";
        chk = 0;
        for(i=i; i>=0; i--)
        {
            if(hexnum[i]=='0' && chk==0)
            {
                chk++;
                continue;
            }
            else
                cout<<hexnum[i];
        }
    }
    else
        cout<<"\nInvalid Octal Digit!";
    cout<<endl;
    return 0;
}
void octalToHexa(int octalNum)
{
    int rev=0, rem, hex=0, mul=1, k=0;
    char binnum[40] = "";
    rev = reverseNum(octalNum);
    if(rev!=0)
    {
        octalNum = rev;
        while(octalNum!=0)
        {
            rem = octalNum%10;
            switch(rem)
            {
                case 0: strcat(binnum, "000");
                    break;
                case 1: strcat(binnum, "001");
                    break;
                case 2: strcat(binnum, "010");
                    break;
                case 3: strcat(binnum, "011");
                    break;
                case 4: strcat(binnum, "100");
                    break;
                case 5: strcat(binnum, "101");
                    break;
                case 6: strcat(binnum, "110");
                    break;
                case 7: strcat(binnum, "111");
                    break;
            }
            octalNum = octalNum/10;
        }
        while(binnum[k]!='\0')
            k++;
        chk=1;
        k--;
        while(k>=0)
        {
            if(binnum[k]=='0')
                rem = 0;
            else
                rem = 1;
            hex = hex + (rem*mul);
            if(chk%4==0)
            {
                if(hex<10)
                    hexnum[i] = hex+48;
                else
                    hexnum[i] = hex+55;
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
            k--;
        }
        if(chk!=1)
            hexnum[i] = hex+48;
        if(chk==1)
            i--;
    }
    else
        chk=0;
}
int reverseNum(int octalNum)
{
    int rem, rev=0;
    while(octalNum!=0)
    {
        rem = octalNum%10;
        if(rem>7)
            return 0;
        rev = (rev*10) + rem;
        octalNum = octalNum/10;
    }
    return rev;
}
