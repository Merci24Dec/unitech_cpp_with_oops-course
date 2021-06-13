// Area of Circle using Function

#include<iostream>
using namespace std;
float findArea(float);
int main()
{
    float rad, area;
    cout<<"Enter the Radius of Circle: ";
    cin>>rad;
    area = findArea(rad);
    cout<<"\nArea of Circle = "<<area;
    cout<<endl;
    return 0;
}
float findArea(float r)
{
    return (3.14*r*r);
}
