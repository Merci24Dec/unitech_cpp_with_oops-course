// Find Smallest Number in Array using Pointer

#include<iostream>
using namespace std;
int main()
{
    int arr[100], tot, i, s, *ptr;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    ptr = &arr[0];
    s = *ptr;
    while(*ptr)
    {
        if(s>(*ptr))
            s = *ptr;
        ptr++;
    }
    cout<<"\nSmallest Number = "<<s;
    cout<<endl;
    return 0;
}
