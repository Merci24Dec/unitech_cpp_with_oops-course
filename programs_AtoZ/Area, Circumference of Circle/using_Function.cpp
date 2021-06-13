#include<iostream>
using namespace std;
class Codes
{
    private:
        float r;
    public:
        void getData();
        float findArea();
        float findCircum();
};
void Codes::getData()
{
    cout<<"Enter the Radius of Circle: ";
    cin>>r;
}
float Codes::findArea()
{
    return (3.14*r*r);
}
float Codes::findCircum()
{
    return (2*3.14*r);
}
int main()
{
    Codes c;
    c.getData();
    cout<<"\nArea of Circle = "<<c.findArea();
    cout<<"\nCircumference of Circle = "<<c.findCircum();
    cout<<endl;
    return 0;
}
