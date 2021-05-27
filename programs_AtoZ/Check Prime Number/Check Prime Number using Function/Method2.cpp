#include<iostream>
using namespace std;
void checkPrimeNumber(int);
int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    checkPrimeNumber(num);
    cout<<endl;
    return 0;
}
void checkPrimeNumber(int num)
{
    int i, chk=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            chk++;
            break;
        }
    }
    if(chk==0)
        cout<<"\nIt is a Prime Number";
    else
        cout<<"\nIt is not a Prime Number";
}
