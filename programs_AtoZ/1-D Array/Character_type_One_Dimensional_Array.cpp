// C++ Program on One Dimensional Array

#include<iostream>
using namespace std;
int main()
{
    char str[50];
    int i=0;
    cout<<"Enter First Your Name: ";
    cin>>str;
    cout<<"\nArray Index\t\tIts Value\n";
    while(str[i])
    {
        cout<<"str["<<i<<"]"<<"\t\t\t"<<str[i]<<endl;
        i++;
    }
    cout<<endl;
    return 0;
}
