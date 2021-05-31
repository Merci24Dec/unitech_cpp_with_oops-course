// C++ Get String Input with Spaces using getline()
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the String: ";
    getline(cin, str);
    cout<<"\nYou've entered: "<<str;
    cout<<endl;
    return 0;
}
