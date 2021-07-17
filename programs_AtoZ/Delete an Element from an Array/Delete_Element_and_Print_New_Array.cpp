// Delete Element and Print New Array

#include<iostream>
using namespace std;
int main()
{
    int arr[100], tot, i, elem, j, found=0;
    cout<<"Enter the Size: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found=1;
            i--;
            tot--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't found in the Array!";
    else
    {
        cout<<"\nElement Deleted Successfully!";
        cout<<"\n\nThe New Array is:\n";
        for(i=0; i<tot; i++)
            cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
