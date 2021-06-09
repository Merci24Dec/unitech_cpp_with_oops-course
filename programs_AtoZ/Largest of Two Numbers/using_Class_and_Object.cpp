// Largest of Two Numbers using Class and Object

#include<iostream>
using namespace std;
class Codes
{
    public:
        int findLargest(int, int);
};
int Codes::findLargest(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    Codes c;
    int numOne, numTwo, larg;
    cout<<"Enter the Two Numbers: ";
    cin>>numOne>>numTwo;
    larg = c.findLargest(numOne, numTwo);
    cout<<"\nLargest = "<<larg;
    cout<<endl;
    return 0;
}
