// C++ Access and Print Element of Three Dimensional Array

#include<iostream>
using namespace std;
int main()
{
    int i, j, k;
    int a[3][4][2] = {
        { {1, 2}, {3, 4}, {5, 6}, {7, 8} },
        { {9, 8}, {7, 6}, {5, 4}, {3, 2} },
        { {0, 3}, {5, 7}, {9, 2}, {4, 6} }
        };
    cout<<"a[0][1][0] = "<<a[0][1][0]<<endl;
    cout<<"a[1][3][0] = "<<a[1][3][0]<<endl;
    cout<<"a[2][0][1] = "<<a[2][0][1]<<endl;
    cout<<endl;
    return 0;
}
