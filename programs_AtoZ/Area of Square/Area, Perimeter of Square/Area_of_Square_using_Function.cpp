// Find Area of Square using Function

#include<iostream>
using namespace std;
float areaOfSquare(float);
int main()
{
    float len, area;
    cout<<"Enter the Length of Square: ";
    cin>>len;
    area = areaOfSquare(len);
    cout<<"\nArea = "<<area;
    cout<<endl;
    return 0;
}
float areaOfSquare(float len)
{
    return (len*len);
}
