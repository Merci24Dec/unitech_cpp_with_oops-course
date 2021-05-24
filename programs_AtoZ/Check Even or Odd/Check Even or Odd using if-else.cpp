// C++ Program to Check Even or Odd Number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num%2==0)
        cout<<"\nIt is an Even Number.";
    else
        cout<<"\nIt is an Odd Number.";
    cout<<endl;
    return 0;
}
