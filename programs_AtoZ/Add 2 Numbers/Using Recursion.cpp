#include<iostream>
using namespace std;

int addFun(int, int);
int main()
{
    int num1, num2, add;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    add = addFun(num1, num2);
    cout<<"\nResult = "<<add;
    cout<<endl;
    return 0;
}
int addFun(int a, int b)
{
    if(b==0)
        return a;
    else
        return (1+addFun(a, b-1));
}
