// Area and Circumference of Circle using Class

#include<iostream>
using namespace std;
class CodesCracker
{
    public:
        float findArea(float r)
        {
            return (3.14*r*r);
        }
        float findCircum(float r)
        {
            return (2*3.14*r);
        }
};
int main()
{
    CodesCracker c;
    float rad, area, circum;
    cout<<"Enter the Radius of Circle: ";
    cin>>rad;
    area = c.findArea(rad);
    circum = c.findCircum(rad);
    cout<<"\nArea of Circle = "<<area;
    cout<<"\nCircumference of Circle = "<<circum;
    cout<<endl;
    return 0;
}
