// Find Grade of Student using Function

#include<iostream>
using namespace std;
const char* findGrade(float [], int);
int main()
{
    int i, n;
    float mark[10];
    cout<<"Enter Number of Subjects (max. 10): ";
    cin>>n;
    cout<<"Enter Marks obtained in "<<n<<" Subjects: ";
    for(i=0; i<n; i++)
        cin>>mark[i];
    cout<<"\nGrade = "<<findGrade(mark, n);
    cout<<endl;
    return 0;
}
const char* findGrade(float mark[], int n)
{
    int i;
    float sum=0, avg;
    for(i=0; i<n; i++)
        sum = sum+mark[i];
    avg = sum/n;
    if(avg>=91 && avg<=100)
        return "A1";
    else if(avg>=81 && avg<91)
        return "A2";
    else if(avg>=71 && avg<81)
        return "B1";
    else if(avg>=61 && avg<71)
        return "B2";
    else if(avg>=51 && avg<61)
        return "C1";
    else if(avg>=41 && avg<51)
        return "C2";
    else if(avg>=33 && avg<41)
        return "D";
    else if(avg>=21 && avg<33)
        return "E1";
    else if(avg>=0 && avg<21)
        return "E2";
    else
        return "Invalid!";
}
