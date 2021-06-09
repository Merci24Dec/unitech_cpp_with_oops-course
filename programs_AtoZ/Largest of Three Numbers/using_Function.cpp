// Find Largest of Three Numbers using Function

#include<iostream>
using namespace std;
int findLargest(int, int, int);
int main()
{
    int numOne, numTwo, numThree, larg;
    cout<<"Enter the Three Numbers: ";
    cin>>numOne>>numTwo>>numThree;
    larg = findLargest(numOne, numTwo, numThree);
    cout<<"\nLargest Number = "<<larg;
    cout<<endl;
    return 0;
}
int findLargest(int nOne, int nTwo, int nThree)
{
    if(nOne>nTwo)
    {
        if(nTwo>nThree)
            return nOne;
        else
        {
            if(nThree>nOne)
                return nThree;
            else
                return nOne;
        }
    }
    else
    {
        if(nTwo>nThree)
            return nTwo;
        else
            return nThree;
    }
}
