// Fahrenheit to Celsius using user-defined Function

#include<iostream>
using namespace std;
float FahrenheitToCelsius(float);
int main()
{
    float fahrenheit, celsius;
    cout<<"Enter the Temperature in Fahrenheit: ";
    cin>>fahrenheit;
    celsius = FahrenheitToCelsius(fahrenheit);
    cout<<endl<<fahrenheit<<"\370F = "<<celsius<<"\370C";
    cout<<endl;
    return 0;
}
float FahrenheitToCelsius(float f)
{
    float c;
    c = (f-32)/1.8;
    return c;
}
