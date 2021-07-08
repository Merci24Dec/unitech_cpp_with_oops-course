// Find Largest Element using Function

#include<iostream>
using namespace std;
int findLarge(int [], int);
int main()
{
    int arr[100], tot, larg, i;
    cout<<"Enter the Size (max. 100): ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    larg = findLarge(arr, tot);
    cout<<"\nLargest Number = "<<larg;
    cout<<endl;
    return 0;
}
int findLarge(int a[], int s)
{
    int i, m;
    m = a[0];
    for(i=1; i<s; i++)
    {
        if(m<a[i])
            m = a[i];
    }
    return m;
}
