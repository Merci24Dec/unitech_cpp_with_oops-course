// Find Factorial of a Number using while Loop

#include<iostream>
using namespace std;
int main()
{
    int num, i, fact=1;
    cout<<"Enter the Number: ";
    cin>>num;
    i=num;
    while(i>=1)
    {
        fact = fact*i;
        i--;
    }
    cout<<"\nFactorial = "<<fact;
    cout<<endl;
    return 0;
}
