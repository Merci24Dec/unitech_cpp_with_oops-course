// Delete Element using User-defined Function

#include<iostream>
using namespace std;
int delElem(int [], int, int);
int main()
{
    int arr[100], tot, i, elem, chk;
    cout<<"Enter the Size: ";
    cin>>tot;
    if(tot>0)
    {
        cout<<"Enter "<<tot<<" Array Elements: ";
        for(i=0; i<tot; i++)
            cin>>arr[i];
        cout<<"\nEnter Element to Delete: ";
        cin>>elem;
        chk = delElem(arr, tot, elem);
        if(chk==101)
            cout<<"\nElement doesn't found in the Array!";
        else if(chk==102)
        {
            cout<<"\nElement Deleted Successfully!";
            cout<<"\n\nThe New Array is:\n";
            cout<<"Empty!";
        }
        else
        {
            cout<<"\nElement Deleted Successfully!";
            cout<<"\n\nThe New Array is:\n";
            for(i=0; i<chk; i++)
                cout<<arr[i]<<"  ";
        }
    }
    else
        cout<<"\nInvalid Input!";
    cout<<endl;
    return 0;
}
int delElem(int arr[], int tot, int elem)
{
    int i, j, found=0;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==0)
        return 101;
    else if(tot==0)
        return 102;
    else
        return tot;
}
