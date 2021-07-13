#include<iostream>
using namespace std;
int main()
{
    int arr[100], tot, i, arrTemp[100], *ptr;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    ptr = &arr[tot-1];
    for(i=0; i<tot; i++)
    {
        arrTemp[i] = *ptr;
        ptr--;
    }
    ptr = &arrTemp[0];
    for(i=0; i<tot; i++)
    {
        arr[i] = *ptr;
        ptr++;
    }
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
