// Bubble Sort in C++ using Function

#include<iostream>
using namespace std;
void bubbleSort(int []);
int main()
{
    int i, arr[10];
    cout<<"Enter 10 Elements: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    bubbleSort(arr);
    cout<<"\nThe New Sorted Array is: \n";
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
void bubbleSort(int arr[])
{
    int i, j, temp;
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
    }
}
