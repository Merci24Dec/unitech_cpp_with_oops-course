// Count Positive, Zero, Negative Numbers using while Loop

#include<iostream>
using namespace std;
int main()
{
    int pos=0, neg=0, zer=0, i=0, arr[100], tot;
    cout<<"Enter the Size (max. 100): ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Numbers: ";
    while(i<tot)
    {
        cin>>arr[i];
        if(arr[i]>0)
            pos++;
        else if(arr[i]==0)
            zer++;
        else
            neg++;
        i++;
    }
    cout<<"\nFrequency of Positive Numbers: "<<pos;
    cout<<"\nFrequency of Zero: "<<zer;
    cout<<"\nFrequency of Negative Numbers: "<<neg;
    cout<<endl;
    return 0;
}
