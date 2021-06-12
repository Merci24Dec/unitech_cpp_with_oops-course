// Area and Perimeter of Triangle using Function

#include<iostream>
#include<cmath>
using namespace std;
float areaOfTriagle(float, float, float);
float perOfTriangle(float, float, float);
int main()
{
    float a, b, c, area, per;
    cout<<"Enter Length of all Three Sides: ";
    cin>>a>>b>>c;
    area = areaOfTriagle(a, b, c);
    cout<<"\nArea = "<<area;
    per = perOfTriangle(a, b, c);
    cout<<"\nPerimeter = "<<per;
    cout<<endl;
    return 0;
}
float areaOfTriagle(float a, float b, float c)
{
    float s, ar;
    s = (a+b+c)/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
float perOfTriangle(float a, float b, float c)
{
    return (a+b+c);
}
