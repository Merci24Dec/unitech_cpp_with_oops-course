// Decimal to Binary from 1 to 20

#include<iostream>
using namespace std;
int main()
{
    int decimalNum, binaryNum[10], i, k;
    cout<<" Decimal Number\t\tBinary Number\n";
    for(k=1; k<=20; k++)
    {
        i=0;
        decimalNum = k;
        while(decimalNum!=0)
        {
            binaryNum[i] = decimalNum%2;
            i++;
            decimalNum = decimalNum/2;
        }
        cout<<" "<<k<<"\t\t\t";
        for(i=(i-1); i>=0; i--)
            cout<<binaryNum[i];
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
