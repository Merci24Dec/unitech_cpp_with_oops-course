#include<iostream>
using namespace std;
int main()
{
    int num;
    char ch;
    cout<<"Enter a Number: ";
    cin>>num;
    ch = num%2==0?'e':'o';
    if(ch=='e')
        cout<<"\nEven Number";
    else
        cout<<"\nOdd Number";
    cout<<endl;
    return 0;
}
