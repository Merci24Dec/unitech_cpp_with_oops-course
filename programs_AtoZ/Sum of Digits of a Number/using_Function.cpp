// Sum of Digits of a Number using Function

#include<iostream>
using namespace std;
int findSumOfDigit(int);
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<"\nSum of Digits = "<<findSumOfDigit(num);
    cout<<endl;
    return 0;
}
int findSumOfDigit(int num)
{
    int sum=0, rem;
    while(num>0)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    return sum;
}
