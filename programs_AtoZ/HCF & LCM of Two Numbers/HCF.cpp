// C++ Program to Find HCF (GCD) of Two Numbers

#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, mp;
    cout<<"Enter Two Numbers: ";
    cin>>numOne>>numTwo;
    if(numOne>numTwo)
        mp = numOne;
    else
        mp = numTwo;
    while(1)
    {
        if((numOne%mp == 0) && (numTwo%mp == 0))
            break;
        else
            mp--;
    }
    cout<<"\nHCF ("<<numOne<<", "<<numTwo<<") = "<<mp;
    cout<<endl;
    return 0;
}
