#include<iostream>
using namespace std;
int main()
{
    int arr[100], tot, i, j, temp, *ptrOne, *ptrTwo;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    ptrOne = &arr[0];
    ptrTwo = &arr[tot-1];
    j = tot-1;
    for(i=0; i<j; i++, j--)
    {
        temp = *ptrOne;
        *ptrOne = *ptrTwo;
        *ptrTwo = temp;
        ptrOne++;
        ptrTwo--;
    }
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
