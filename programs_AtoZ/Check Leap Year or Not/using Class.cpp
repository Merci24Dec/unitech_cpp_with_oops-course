// Check Leap Year or Not using Class

#include<iostream>
using namespace std;
class CodesCracker
{
    private:
        int yr;
    public:
        int getData();
        void checkLeapYear(int);
};
int CodesCracker::getData()
{
    cout<<"Enter the Year: ";
    cin>>yr;
    return yr;
}
void CodesCracker::checkLeapYear(int yr)
{
    if((yr%4==0) && (yr%100!=0))
        cout<<"\nIt is a Leap Year";
    else if(yr%400==0)
        cout<<"\nIt is a Leap Year";
    else
        cout<<"\nIt is not a Leap Year";
}
int main()
{
    CodesCracker c;
    int y;
    y = c.getData();
    c.checkLeapYear(y);
    cout<<endl;
    return 0;
}
