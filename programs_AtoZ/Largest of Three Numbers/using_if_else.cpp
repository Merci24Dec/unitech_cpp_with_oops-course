// C++ Program to Find Largest of Three Numbers

#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, numThree, larg;
    cout<<"Enter the Three Numbers: ";
    cin>>numOne>>numTwo>>numThree;
    if(numOne>numTwo)
    {
        if(numTwo>numThree)
            larg = numOne;
        else
        {
            if(numThree>numOne)
                larg = numThree;
            else
                larg = numOne;
        }
    }
    else
    {
        if(numTwo>numThree)
            larg = numTwo;
        else
            larg = numThree;
    }
    cout<<"\nLargest Number = "<<larg;
    cout<<endl;
    return 0;
}
