// Largest of Two Numbers using Conditional Operator

#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, larg;
    cout<<"Enter the Two Numbers: ";
    cin>>numOne>>numTwo;
    larg = (numOne>numTwo) ? numOne : numTwo;
    cout<<"\nLargest = "<<larg;
    cout<<endl;
    return 0;
}
