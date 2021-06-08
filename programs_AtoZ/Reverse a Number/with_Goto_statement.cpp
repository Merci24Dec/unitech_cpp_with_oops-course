// C++ Reverse a Number (without using loop) with Goto statement

#include<iostream>
using namespace std;
int main()
{
    int num, rem, rev=0;
    cout<<"Enter the Number: ";
    cin>>num;
    CODES:
        rem = num%10;
        rev = (rev*10) + rem;
        num = num/10;
        if(num!=0)
            goto CODES;
    cout<<"\nReverse = "<<rev;
    cout<<endl;
    return 0;
}
