// C++ Program to Find Area of Triangle with Base and Height

#include<iostream>
using namespace std;
int main()
{
    float b, h, area;
    cout<<"Enter Base length of Triangle: ";
    cin>>b;
    cout<<"Enter Heigth length of Triangle: ";
    cin>>h;
    area = 0.5*b*h;
    cout<<"\nArea = "<<area;
    cout<<endl;
    return 0;
}
