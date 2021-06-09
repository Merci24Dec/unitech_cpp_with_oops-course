// Find Factorial using User-defined Function

#include<iostream>
using namespace std;
int findFact(int);
int main()
{
    int num, fact;
    cout<<"Enter the Number: ";
    cin>>num;
    fact = findFact(num);
    cout<<"\nFactorial = "<<fact;
    cout<<endl;
    return 0;
}
int findFact(int n)
{
    int i, f=1;
    for(i=n; i>=1; i--)
        f = f*i;
    return f;
}
