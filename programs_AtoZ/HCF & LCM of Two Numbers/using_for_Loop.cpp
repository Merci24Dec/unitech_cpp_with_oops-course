// Find LCM and HCF of Two Numbers using for Loop

#include<iostream>
using namespace std;
int main()
{
    int numOne, numTwo, mp, temp;
    cout<<"Enter Two Numbers: ";
    cin>>numOne>>numTwo;
    if(numOne>numTwo)
        mp = numOne;
    else
        mp = numTwo;
    temp = mp;
    for(;;mp++)
    {
        if((mp%numOne == 0) && (mp%numTwo == 0))
            break;
    }
    cout<<"\nLCM ("<<numOne<<", "<<numTwo<<") = "<<mp;
    mp = temp;
    for(;;mp--)
    {
        if((numOne%mp == 0) && (numTwo%mp == 0))
            break;
    }
    cout<<"\nHCF ("<<numOne<<", "<<numTwo<<") = "<<mp;
    cout<<endl;
    return 0;
}
