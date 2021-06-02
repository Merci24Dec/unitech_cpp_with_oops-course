// Find Sum of Digits of a Number using for Loop

#include<iostream>
using namespace std;
int main()
{
    int num, rem, sum;
    cout<<"Enter the Number: ";
    cin>>num;
    for(sum=0; num>0; num=num/10)
    {
        rem = num%10;
        sum = sum+rem;
    }
    cout<<"\nSum of Digits = "<<sum;
    cout<<endl;
    return 0;
}
