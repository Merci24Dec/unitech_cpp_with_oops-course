// C++ Reverse a Number using Array

#include<iostream>
using namespace std;
int main()
{
    int num, rem, arr[10], i=0, tot=0;
    cout<<"Enter the Number: ";
    cin>>num;
    while(num!=0)
    {
        rem = num%10;
        arr[i] = rem;
        num = num/10;
        i++;
        tot++;
    }
    cout<<"\nReverse = ";
    for(i=0; i<tot; i++)
        cout<<arr[i];
    cout<<endl;
    return 0;
}
