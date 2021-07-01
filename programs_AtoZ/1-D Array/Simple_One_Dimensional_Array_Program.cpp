// C++ Simple One Dimensional Array Program

#include<iostream>
using namespace std;
int main()
{
    int arr[50], tot, i;
    cout<<"Enter the Size: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Numbers: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nArray with Index\tIts Value\n";
    for(i=0; i<tot; i++)
        cout<<"arr["<<i<<"]"<<"\t\t\t"<<arr[i]<<endl;
    cout<<endl;
    return 0;
}
