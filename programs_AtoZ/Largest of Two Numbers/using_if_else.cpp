// C++ Program to Find Largest of Two Numbers
// ----codescracker.com----

#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, larg;
    cout<<"Enter the Two Numbers: ";
    cin>>numOne>>numTwo;
    if(numOne>numTwo)
        larg = numOne;
    else
        larg = numTwo;
    cout<<"\nLargest = "<<larg;
    cout<<endl;
    return 0;
}
