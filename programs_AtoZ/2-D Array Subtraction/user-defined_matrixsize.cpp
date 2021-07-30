// C++ Matrix Subtraction of Given Size

#include<iostream>
using namespace std;
int main()
{
    int rowOne, colOne, rowTwo, colTwo, i, j;
    int matOne[10][10], matTwo[10][10], matSub[10][10];
    cout<<"Enter Row and Column Size for First Matrix: ";
    cin>>rowOne>>colOne;
    cout<<"Enter Row and Column Size for Second Matrix: ";
    cin>>rowTwo>>colTwo;
    if(rowOne==rowTwo && colOne==colTwo)
    {
        cout<<"\nEnter "<<rowOne*colOne<<" Elements for First Matrix: ";
        for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colOne; j++)
                cin>>matOne[i][j];
        }
        cout<<"\nEnter "<<rowTwo*colTwo<<" Elements for Second Matrix: ";
        for(i=0; i<rowTwo; i++)
        {
            for(j=0; j<colTwo; j++)
                cin>>matTwo[i][j];
        }
        cout<<"\nThe New Matrix (Subtraction Result) is:\n";
        for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colOne; j++)
            {
                matSub[i][j] = matOne[i][j] - matTwo[i][j];
                cout<<matSub[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"\nRow and Column Size of Both Matrix Mismatched!";
    cout<<endl;
    return 0;
}
