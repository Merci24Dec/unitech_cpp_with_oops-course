// Find Area and Perimeter of Square using Class
// ----codescracker.com----

#include<iostream>
using namespace std;
class CodesCracker
{
    private:
        float len;
    public:
        void getData();
        float findArea();
        float findPerimeter();
};
void CodesCracker::getData()
{
    cout<<"Enter the Length of Square: ";
    cin>>len;
}
float CodesCracker::findArea()
{
    return (len*len);
}
float CodesCracker::findPerimeter()
{
    return (4*len);
}
int main()
{
    CodesCracker c;
    float area, per;
    c.getData();
    area = c.findArea();
    per = c.findPerimeter();
    cout<<"\nArea = "<<area;
    cout<<"\nPerimeter = "<<per;
    cout<<endl;
    return 0;
}
