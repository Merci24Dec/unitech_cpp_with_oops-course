// Circumference of Circle using Function

#include<iostream>
using namespace std;
float findCircum(float);
int main()
{
    float rad;
    cout<<"Enter the Radius of Circle: ";
    cin>>rad;
    cout<<"\nCircumference of Circle = "<<findCircum(rad);
    cout<<endl;
    return 0;
}
float findCircum(float r)
{
    return (2*3.14*r);
}
