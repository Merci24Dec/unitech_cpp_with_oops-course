// C++ Program to Find Perimeter of Rectangle

#include<iostream>
using namespace std;
int main()
{
    float len, bre, per;
    cout<<"Enter Length and Breadth of Rectangle: ";
    cin>>len>>bre;
    per = 2*(len+bre);
    cout<<"\nPerimeter = "<<per;
    cout<<endl;
    return 0;
}
