// Find Perimeter of Triangle Based on User's Choice

#include<iostream>
using namespace std;
int main()
{
    float a, b, c, per;
    int ch;
    do
    {
        cout<<"1. Equilateral Triangle\n";
        cout<<"2. Isosceles Triangle\n";
        cout<<"3. Scalene Triangle\n";
        cout<<"4. Exit\n";
        cout<<"\nEnter Your Choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nEnter Side Length: ";
                cin>>a;
                per = 3*a;
                break;
            case 2:
                cout<<"\nEnter First Length (of Equal Sides): ";
                cin>>a;
                cout<<"Enter Second Length: ";
                cin>>b;
                per = 2*a+b;
                break;
            case 3:
                cout<<"\nEnter Length of all 3 Sides: ";
                cin>>a>>b>>c;
                per = a+b+c;
                break;
            case 4:
                break;
            default:
                cout<<"\nWrong Choice!";
                continue;
        }
        if(ch>=1 && ch<=3)
            cout<<"\nPerimeter = "<<per<<"\n\n";
    }while(ch>=1 && ch<=3);
    cout<<endl;
    return 0;
}
