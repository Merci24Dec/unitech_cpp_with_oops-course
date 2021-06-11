// Find Area and Perimeter of Rectangle using Class

#include<iostream>
using namespace std;
class Codes
{
    private:
        float len, bre;
    public:
        void getData();
        float areaOfRect();
        float periOfRect();
};
void Codes::getData()
{
    cout<<"Enter Length and Breadth of Rectangle: ";
    cin>>len>>bre;
}
float Codes::areaOfRect()
{
    return (len*bre);
}
float Codes::periOfRect()
{
    return (2*(len+bre));
}
int main()
{
    Codes c;
    float area, per;
    c.getData();
    area = c.areaOfRect();
    per = c.periOfRect();
    cout<<"\nArea = "<<area;
    cout<<"\nPerimeter = "<<per;
    cout<<endl;
    return 0;
}
