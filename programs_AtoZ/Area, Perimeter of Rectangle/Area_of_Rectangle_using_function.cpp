// Find Area of Rectangle using Function

#include<iostream>
using namespace std;
float areaOfRectangle(float, float);
int main()
{
    float len, bre, area;
    cout<<"Enter Length of Rectangle: ";
    cin>>len;
    cout<<"Enter Breadth of Rectangle: ";
    cin>>bre;
    area = areaOfRectangle(len, bre);
    cout<<"\nArea = "<<area;
    cout<<endl;
    return 0;
}
float areaOfRectangle(float len, float bre)
{
    return (len*bre);
}
