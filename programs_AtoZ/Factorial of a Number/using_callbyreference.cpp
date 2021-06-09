// Find Factorial using Call by Reference

#include<iostream>
using namespace std;
void findFact(int, int *);
int main()
{
    int num, fact=1;
    cout<<"Enter the Number: ";
    cin>>num;
    findFact(num, &fact);
    cout<<"\nFactorial = "<<fact;
    cout<<endl;
    return 0;
}
void findFact(int n, int *f)
{
    int i;
    for(i=n; i>=1; i--)
        *f = (*f)*i;
}
