// C++ Reverse a Number using Class

#include<iostream>
using namespace std;
class Codes
{
    public:
        int rev(int);
};
int Codes::rev(int n)
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
int main()
{
    int num, r;
    Codes c;
    cout<<"Enter the Number: ";
    cin>>num;
    r = c.rev(num);
    cout<<"\nReverse = "<<r;
    cout<<endl;
    return 0;
}
