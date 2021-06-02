// Sum of Digits of a Number using Class

#include<iostream>
using namespace std;
class Codes
{
    private:
        int num, sum, rem;
    public:
        void getNumber();
        int findSumOfDigit();
};
void Codes::getNumber()
{
    cout<<"Enter the Number: ";
    cin>>num;
}
int Codes::findSumOfDigit()
{
    sum=0;
    while(num>0)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    return sum;
}
int main()
{
    Codes c;
    int sum;
    c.getNumber();
    sum = c.findSumOfDigit();
    cout<<"\nSum of Digits = "<<sum;
    cout<<endl;
    return 0;
}
