#include<iostream>
using namespace std;
void revArray(int [], int);
int main()
{
    int arr[100], tot, i, j, temp;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    revArray(arr, tot);
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
void revArray(int a[], int t)
{
    int i, j, temp;
    j = t-1;
    for(i=0; i<j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
