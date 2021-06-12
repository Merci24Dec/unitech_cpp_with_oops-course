// Find Perimeter of Triangle using 3 Sides

#include<iostream>
using namespace std;
int main()
{
    float a, b, c, per;
    cout<<"Enter Length of First Side: ";
    cin>>a;
    cout<<"Enter Length of Second Side: ";
    cin>>b;
    cout<<"Enter Length of Third Side: ";
    cin>>c;
    per = a+b+c;
    cout<<"\nPerimeter = "<<per;
    cout<<endl;
    return 0;
}
