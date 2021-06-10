// Find LCM and HCF in Single Program

#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, lcm, hcf, a, b, temp;
    cout<<"Enter Two Numbers: ";
    cin>>numOne>>numTwo;
    a = numOne;
    b = numTwo;
    while(b!=0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    hcf = a;
    lcm = (numOne*numTwo)/hcf;
    cout<<"\nLCM ("<<numOne<<", "<<numTwo<<") = "<<lcm;
    cout<<"\nHCF ("<<numOne<<", "<<numTwo<<") = "<<hcf;
    cout<<endl;
    return 0;
}
