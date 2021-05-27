//C++ Program to Check Prime Number using Function
#include<iostream>
using namespace std;
int checkPrimeNumber(int);
int main()
{
    int num, chk;
    cout<<"Enter a Number: ";
    cin>>num;
    chk = checkPrimeNumber(num);
    if(chk==0)
        cout<<"\nIt is a Prime Number";
    else
        cout<<"\nIt is not a Prime Number";
    cout<<endl;
    return 0;
}
int checkPrimeNumber(int num)
{
    int i, chk=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            chk++;
            return chk;
        }
    }
    return chk;
}
