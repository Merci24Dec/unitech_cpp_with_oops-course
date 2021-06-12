// Find Area and Perimeter of Triangle using Class

#include<iostream>
#include<cmath>
using namespace std;
class Codes
{
    private:
        float a, b, c, s, ar;
    public:
        void getData();
        float areaOfTriagle();
        float perOfTriangle();
};
void Codes::getData()
{
    cout<<"Enter Length of all Three Sides: ";
    cin>>a>>b>>c;
}
float Codes::areaOfTriagle()
{
    s = (a+b+c)/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
float Codes::perOfTriangle()
{
    return (a+b+c);
}
int main()
{
    Codes c;
    float area, perimeter;
    c.getData();
    area = c.areaOfTriagle();
    cout<<"\nArea = "<<area;
    perimeter = c.perOfTriangle();
    cout<<"\nPerimeter = "<<perimeter;
    cout<<endl;
    return 0;
}
