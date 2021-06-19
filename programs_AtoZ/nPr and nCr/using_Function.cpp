// Find nPr and nCr using Function

#include<iostream>
using namespace std;
long long findFact(int);
int findNPR(int, int);
int findNCR(int, int);
int main()
{
    int npr, ncr, n, r;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"Enter the Value of r: ";
    cin>>r;
    npr = findNPR(n, r);
    ncr = findNCR(n, r);
    cout<<"\nPermutation (nPr) = "<<npr;
    cout<<"\nCombination (nCr) = "<<ncr;
    cout<<endl;
    return 0;
}
long long findFact(int num)
{
    int i=1, fact=1;
    while(i<=num)
    {
        fact = i*fact;
        i++;
    }
    return fact;
}
int findNPR(int n, int r)
{
    long long numerator, denominator;
    numerator = findFact(n);
    denominator = findFact(n-r);
    return (numerator/denominator);
}
int findNCR(int n, int r)
{
    int npr, ncr;
    npr = findNPR(n, r);
    ncr = npr/findFact(r);
    return ncr;
}
