// Find Smallest Number in Array using Function

#include<iostream>
using namespace std;
int findSmallest(int [], int);
int main()
{
    int arr[100], tot, i, s;
    cout<<"Enter the Size for Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    s = findSmallest(arr, tot);
    cout<<"\nSmallest Number = "<<s;
    cout<<endl;
    return 0;
}
int findSmallest(int a[], int t)
{
    int s, i;
    s = a[0];
    for(i=1; i<t; i++)
    {
        if(s>a[i])
            s = a[i];
    }
    return s;
}
