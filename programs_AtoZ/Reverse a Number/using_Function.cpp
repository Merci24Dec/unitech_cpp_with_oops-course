// C++ Reverse a Number using Function

#include<iostream>
using namespace std;
int rev(int);
int main()
{
    int num, r;
    cout<<"Enter the Number: ";
    cin>>num;
    r = rev(num);
    cout<<"\nReverse = "<<r;
    cout<<endl;
    return 0;
}
int rev(int n)
{
    int rem, res=0;
    while(n!=0)
    {
        rem = n%10;
        res = (res*10) + rem;
        n = n/10;
    }
    return res;
}
