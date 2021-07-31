// C++ Allow User to Enter elements for 3D Array

#include<iostream>
using namespace std;
int main()
{
    int i, j, k, a[10][10][10];
    int one, two, three;
    cout<<"Enter the Dimension of 3D Array: ";
    cin>>one>>two>>three;
    cout<<"Enter "<<one*two*three<<" 3D Array Elements: ";
    for(i=0; i<one; i++)
    {
        for(j=0; j<two; j++)
        {
            for(k=0; k<three; k++)
                cin>>a[i][j][k];
        }
    }
    cout<<endl;
    for(i=0; i<one; i++)
    {
        for(j=0; j<two; j++)
        {
            for(k=0; k<three; k++)
                cout<<a[i][j][k]<<"  ";
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
