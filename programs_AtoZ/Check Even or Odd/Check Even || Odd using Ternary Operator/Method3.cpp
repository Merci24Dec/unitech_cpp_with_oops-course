#include<iostream>
using namespace std;
int main()
{
    int num, val;
    cout<<"Enter a Number: ";
    cin>>num;
    val = (num%2==0)?1:0;
    if(val==1)
        cout<<"\nEven Number";
    else
        cout<<"\nOdd Number";
    cout<<endl;
    return 0;
}
