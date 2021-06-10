// Find Perimeter of Square using Function

#include<iostream>
using namespace std;
float perOfSquare(float);
int main()
{
    float len;
    cout<<"Enter the Length of Square: ";
    cin>>len;
    cout<<"\nPerimeter = "<<perOfSquare(len);
    cout<<endl;
    return 0;
}
float perOfSquare(float len)
{
    return (4*len);
}
