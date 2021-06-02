// Find Sum of Digits of a Number without using Loop

#include<iostream>
using namespace std;
int main()
{
    int num, rem, sum=0;
    cout<<"Enter the Number: ";
    cin>>num;
    CODES:
        rem = num%10;
        sum = sum+rem;
        num = num/10;
        if(num>0)
            goto CODES;
    cout<<"\nSum of Digits = "<<sum;
    cout<<endl;
    return 0;
}
