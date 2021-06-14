// Celsius to Fahrenheit Conversion in C++ using Function

#include<iostream>
using namespace std;
float CelsiusToFahrehneit(float);
int main()
{
    float celsius, fahrenheit;
    cout<<"Enter the Temperature in Celsius: ";
    cin>>celsius;
    fahrenheit = CelsiusToFahrehneit(celsius);
    cout<<endl<<celsius<<"\370C = "<<fahrenheit<<"\370F";
    cout<<endl;
    return 0;
}
float CelsiusToFahrehneit(float celsius)
{
    return ((celsius*1.8)+32);
}
