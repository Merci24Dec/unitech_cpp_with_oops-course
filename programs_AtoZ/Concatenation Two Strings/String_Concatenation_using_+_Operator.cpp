// String Concatenation using + Operator

#include<iostream>
using namespace std;
int main()
{
    string strOne="", strTwo="", strThree="";
    cout<<"Enter the First String: ";
    cin>>strOne;
    cout<<"Enter the Second String: ";
    cin>>strTwo;
    strThree = strOne + strTwo;
    cout<<"\nString after Concatenation: "<<strThree;
    cout<<endl;
    return 0;
}
