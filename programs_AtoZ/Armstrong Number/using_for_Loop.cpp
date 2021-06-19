// C++ Check Armstrong Number using for Loop

#include<iostream>
using namespace std;
int main()
{
    int num, temp, noOfDigit=0, res=0, rem, pow, i;
    cout<<"Enter the Number: ";
    cin>>num;
    for(temp=num; temp>0; temp=temp/10)
        noOfDigit++;
    for(temp=num; temp>0; temp=temp/10)
    {
        rem = temp%10;
        pow = 1;
        for(i=0; i<noOfDigit; i++)
            pow = pow*rem;
        res = res + pow;
    }
    if(res==num)
        cout<<"\nIt is an Armstrong Number";
    else
        cout<<"\nIt is not an Armstrong Number";
    cout<<endl;
    return 0;
}
