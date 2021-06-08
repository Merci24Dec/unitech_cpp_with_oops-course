// C++ Swap two Numbers using Function (call by reference)

#include<iostream>
using namespace std;
void swapFun(int *, int *);
int main()
{
    int numOne, numTwo;
    cout<<"Enter the First Number: ";
    cin>>numOne;
    cout<<"Enter the Second Number: ";
    cin>>numTwo;
    cout<<"\nBefore Swap:\n";
    cout<<"First Number = "<<numOne<<"\tSecond Number = "<<numTwo;
    swapFun(&numOne, &numTwo);
    cout<<"\n\nAfter Swap:\n";
    cout<<"First Number = "<<numOne<<"\tSecond Number = "<<numTwo;
    cout<<endl;
    return 0;
}
void swapFun(int *nOne, int *nTwo)
{
    int temp;
    temp = *nOne;
    *nOne = *nTwo;
    *nTwo = temp;
}
