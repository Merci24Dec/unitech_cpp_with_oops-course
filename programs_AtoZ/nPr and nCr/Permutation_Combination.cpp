// C++ Program to Find nPr and nCr

#include<iostream>
using namespace std;
int main()
{
    long long fact=1, numerator, denominator;
    int npr, ncr, n, r, i=1, sub;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"Enter the Value of r: ";
    cin>>r;
    while(i<=n)
    {
        fact = i*fact;
        i++;
    }
    numerator=fact;                   // fact = n!
    sub = n-r;
    fact=1, i=1;
    while(i<=sub)
    {
        fact = i*fact;
        i++;
    }
    denominator = fact;               // fact = (n-r)!
    npr = numerator/denominator;
    i=1, fact=1;
    while(i<=r)
    {
        fact = i*fact;
        i++;
    }
    ncr = npr/fact;                   // fact = r!
    cout<<"\nPermutation (nPr) = "<<npr;
    cout<<"\nCombination (nCr) = "<<ncr;
    cout<<endl;
    return 0;
}
