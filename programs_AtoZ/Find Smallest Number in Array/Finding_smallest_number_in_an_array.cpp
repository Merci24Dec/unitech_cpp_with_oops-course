// C++ Program to Find Smallest Number in Array

#include<iostream>
using namespace std;
int main()
{
    int arr[100], tot, i, s;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    s = arr[0];
    for(i=1; i<tot; i++)
    {
        if(s>arr[i])
            s = arr[i];
    }
    cout<<"\nSmallest Number = "<<s;
    cout<<endl;
    return 0;
}
