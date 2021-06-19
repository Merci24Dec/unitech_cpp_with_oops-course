// Find nPr and nCr using for Loop

#include<iostream>
using namespace std;
int main()
{
    long long fact, numerator, denominator;
    int npr, ncr, n, r, i, sub;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"Enter the Value of r: ";
    cin>>r;
    for(i=1, fact=1; i<=n; i++)
        fact = i*fact;
    numerator=fact;                   // fact = n!
    sub = n-r;
    for(i=1, fact=1; i<=sub; i++)
        fact = i*fact;
    denominator = fact;               // fact = (n-r)!
    npr = numerator/denominator;
    for(i=1, fact=1; i<=r; i++)
        fact = i*fact;
    ncr = npr/fact;                   // fact = r!
    cout<<"\nPermutation (nPr) = "<<npr;
    cout<<"\nCombination (nCr) = "<<ncr;
    cout<<endl;
    return 0;
}
