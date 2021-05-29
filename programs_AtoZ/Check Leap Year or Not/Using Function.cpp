#include<iostream>
using namespace std;
void checkLeap(int);
int main()
{
    int yr, val;
    cout<<"Enter the Year: ";
    cin>>yr;
    checkLeap(yr);
    cout<<endl;
    return 0;
}
void checkLeap(int yr)
{
    if((yr%4==0) && (yr%100!=0))
        cout<<"\nIt is a Leap Year";
    else if(yr%400==0)
        cout<<"\nIt is a Leap Year";
    else
        cout<<"\nIt is not a Leap Year";
}
