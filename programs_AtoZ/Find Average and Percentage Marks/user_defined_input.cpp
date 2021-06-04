// Allow User to Define Maximum Mark
#include<iostream>
using namespace std;
int main()
{
    int i, n;
    float tot, arr[10], sum=0, avg, perc;
    cout<<"Enter Number of Subjects: ";
    cin>>n;
    cout<<"\nEnter Total Marks: ";
    cin>>tot;
    cout<<"\nEnter Marks obtained in "<<n<<" Subjects: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }
    tot = tot*n;
    avg = sum/n;
    perc = (sum/tot)*100;
    cout<<"\nAverage Marks = "<<avg;
    cout<<"\nPercentage Marks = "<<perc<<"%";
    cout<<endl;
    return 0;
}
