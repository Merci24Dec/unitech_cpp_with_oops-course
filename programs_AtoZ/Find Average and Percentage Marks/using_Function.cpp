// Find Average and Percentage Marks using Function

#include<iostream>
using namespace std;
float averageMark(float [], int);
float percMark(float [], int);
int main()
{
    int i, n;
    float arr[10], avg, per;
    cout<<"Enter Number of Subjects: ";
    cin>>n;
    cout<<"\nEnter Marks obtained in "<<n<<" Subjects: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    avg = averageMark(arr, n);
    per = percMark(arr, n);
    cout<<"\nAverage Marks = "<<avg;
    cout<<"\nPercentage Marks = "<<per<<"%";
    cout<<endl;
    return 0;
}
float averageMark(float arr[], int n)
{
    int i;
    float sum=0;
    for(i=0; i<n; i++)
        sum = sum+arr[i];
    return (sum/n);
}
float percMark(float arr[], int n)
{
    float perc;
    perc = averageMark(arr, n);
    return perc;
}
