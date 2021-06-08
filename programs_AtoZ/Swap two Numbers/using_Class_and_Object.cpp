// C++ Swap two Numbers using Class and Object

#include<iostream>
using namespace std;
class CODES
{
    public:
        void swapFun(int *, int *);
};
void CODES::swapFun(int *nOne, int *nTwo)
{
    int temp;
    temp = *nOne;
    *nOne = *nTwo;
    *nTwo = temp;
}
int main()
{
    int numOne, numTwo;
    cout<<"Enter the First Number: ";
    cin>>numOne;
    cout<<"Enter the Second Number: ";
    cin>>numTwo;
    cout<<"\nBefore Swap:\n";
    cout<<"First Number = "<<numOne<<"\tSecond Number = "<<numTwo;
    CODES c;
    c.swapFun(&numOne, &numTwo);
    cout<<"\n\nAfter Swap:\n";
    cout<<"First Number = "<<numOne<<"\tSecond Number = "<<numTwo;
    cout<<endl;
    return 0;
}
