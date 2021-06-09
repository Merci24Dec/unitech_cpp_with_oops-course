// Find Largest of Two Numbers using Function

#include<iostream>
using namespace std;
int largeOfTwo(int, int);
int main()
{
    int numOne, numTwo, larg;
    cout<<"Enter the Two Numbers: ";
    cin>>numOne>>numTwo;
    larg = largeOfTwo(numOne, numTwo);
    cout<<"\nLargest = "<<larg;
    cout<<endl;
    return 0;
}
int largeOfTwo(int nOne, int nTwo)
{
    if(nOne>nTwo)
        return nOne;
    else
        return nTwo;
}
