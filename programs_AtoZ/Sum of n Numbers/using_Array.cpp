// Sum of n Numbers using Array

#include<iostream>
using namespace std;
int main()
{
    int n, i, arr[50], sum=0;
    cout<<"Enter the value of n (max. 50): ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout<<"\nSum = "<<sum;
    cout<<endl;
    return 0;
}
