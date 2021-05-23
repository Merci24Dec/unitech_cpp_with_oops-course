#include<iostream>
using namespace std;

class Codes
{
    private:
        int x, y;
    public:
        void getData();
        int add();
};
void Codes::getData()
{
    cout<<"Enter Two Numbers: ";
    cin>>x>>y;
}
int Codes::add()
{
    return (x+y);
}
int main()
{
    Codes c;
    int sum;
    c.getData();
    sum = c.add();
    cout<<"\nResult = "<<sum;
    cout<<endl;
    return 0;
}
