// Find LCM and HCF of Two Numbers using Function

#include<iostream>
using namespace std;
int findLCM(int, int);
int findHCF(int, int);
int main()
{
    int numOne, numTwo, res;
    cout<<"Enter Two Numbers: ";
    cin>>numOne>>numTwo;
    res = findLCM(numOne, numTwo);
    cout<<"\nLCM ("<<numOne<<", "<<numTwo<<") = "<<res;
    res = findHCF(numOne, numTwo);
    cout<<"\nHCF ("<<numOne<<", "<<numTwo<<") = "<<res;
    cout<<endl;
    return 0;
}
int findLCM(int a, int b)
{
    int lcm;
    if(a>b)
        lcm = a;
    else
        lcm = b;
    while(1)
    {
        if((lcm%a == 0) && (lcm%b == 0))
            break;
        lcm++;
    }
    return lcm;
}
int findHCF(int a, int b)
{
    int hcf;
    if(a>b)
        hcf = a;
    else
        hcf = b;
    while(1)
    {
        if((a%hcf == 0) && (b%hcf == 0))
            break;
        hcf--;
    }
    return hcf;
}
