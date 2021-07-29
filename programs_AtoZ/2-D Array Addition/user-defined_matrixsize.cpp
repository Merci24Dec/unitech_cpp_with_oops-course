// Allow User to Defined Size of Matrix

#include<iostream>
using namespace std;
int main()
{
    int rowOne, colOne, rowTwo, colTwo, i, j;
    int mat1[10][10], mat2[10][10], sum=0;
    cout<<"Enter Row and Column Size of First Matrix: ";
    cin>>rowOne>>colOne;
    cout<<"Enter Row and Column Size of Second Matrix: ";
    cin>>rowTwo>>colTwo;
    if(rowOne==rowTwo && colOne==colTwo)
    {
        cout<<"\nEnter "<<rowOne<<"*"<<colOne<<" First Matrix Elements: ";
        for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colOne; j++)
                cin>>mat1[i][j];
        }
        cout<<"Enter "<<rowOne<<"*"<<colOne<<" Second Matrix Elements: ";
        for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colOne; j++)
                cin>>mat2[i][j];
        }
        cout<<"\nAddition Result of Two Given Matrix is:\n";
        for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colOne; j++)
            {
                sum = mat1[i][j]+mat2[i][j];
                cout<<sum<<"  ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"\nSize Mismatched!\n";
    return 0;
}
