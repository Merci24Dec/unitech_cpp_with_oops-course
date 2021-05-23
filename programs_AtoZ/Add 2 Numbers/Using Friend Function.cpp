#include<iostream>
using namespace std;

class Codes
{
    private:
        int a, b, sum;
    public:
        void getData()
        {
            cout<<"Enter Two Numbers: ";
            cin>>a>>b;
        }
        void showResult()
        {
            cout<<"\nResult = "<<sum;
        }
        friend void add(Codes &c);
};
int main()
{
    Codes c;
    c.getData();
    add(c);
    c.showResult();
    cout<<endl;
    return 0;
}
void add(Codes &c)
{
    c.sum = (c.a) + (c.b);
}
