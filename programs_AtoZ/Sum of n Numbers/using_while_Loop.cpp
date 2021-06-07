// Sum of n Numbers using while Loop

#include<iostream>
using namespace std;
int main()
{
    int n, i=0, num, sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    while(i<n)
    {
        cin>>num;
        sum = sum+num;
        i++;
    }
    cout<<"\nSum = "<<sum;
    cout<<endl;
    return 0;
}
