// Find Perimeter of Rectangle using Function

#include<iostream>
using namespace std;
float perOfRectangle(float, float);
int main()
{
    float len, bre;
    cout<<"Enter Length and Breadth of Rectangle: ";
    cin>>len>>bre;
    cout<<"\nPerimeter = "<<perOfRectangle(len, bre);
    cout<<endl;
    return 0;
}
float perOfRectangle(float len, float bre)
{
    return (2*(len+bre));
}
