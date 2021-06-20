// Print Binary Equivalent of Given Octal Number

#include<iostream>
using namespace std;
int main()
{
    int octalNum, rev=0, rem;
    cout<<"Enter the Octal Number: ";
    cin>>octalNum;
    while(octalNum!=0)
    {
        rem = octalNum%10;
        rev = (rev*10) + rem;
        octalNum = octalNum/10;
    }
    octalNum = rev;
    cout<<"\nEquivalent Binary Value: ";
    while(octalNum!=0)
    {
        rem = octalNum%10;
        switch(rem)
        {
            case 0: cout<<"000";
                break;
            case 1: cout<<"001";
                break;
            case 2: cout<<"010";
                break;
            case 3: cout<<"011";
                break;
            case 4: cout<<"100";
                break;
            case 5: cout<<"101";
                break;
            case 6: cout<<"110";
                break;
            case 7: cout<<"111";
                break;
            default: cout<<"--InvalidOctalDigit("<<rem<<")--";
                break;
        }
        octalNum = octalNum/10;
    }
    cout<<endl;
    return 0;
}
