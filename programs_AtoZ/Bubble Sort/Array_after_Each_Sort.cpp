// Print Array after Each Sort

#include<iostream>
using namespace std;
int main()
{
    int i, arr[10], j, temp;
    cout<<"Enter 10 Elements: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<endl;
    for(i=0; i<9; i++)
    {
        for(j=0; j<(10-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout<<"Step "<<i+1<<": ";
        for(j=0; j<10; j++)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
