// C++ Print Hello World using Class and Object
#include<iostream>
using namespace std;
class Code
{
    public:
        void printHello();
};
void Code::printHello()
{
    cout<<"Hello, World!";
}
int main()
{
    Code c;
    c.printHello();
    cout<<endl;
    return 0;
}
