// Print resultant Matrix

#include<iostream>
using namespace std;
int main()
{
    int matOne[3][3], matTwo[3][3], matSub[3][3], i, j;
    cout<<"Enter 9 Elements for First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matOne[i][j];
    }
    cout<<"Enter 9 Elements for Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matTwo[i][j];
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            matSub[i][j] = matOne[i][j] - matTwo[i][j];
    }
    cout<<"\nSubtraction of Two Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<matOne[i][j]<<"  ";
        if(i==1)
            cout<<"  -\t";
        else
            cout<<"\t";
        for(j=0; j<3; j++)
            cout<<matTwo[i][j]<<"  ";
        if(i==1)
            cout<<"  =\t";
        else
            cout<<"\t";
        for(j=0; j<3; j++)
            cout<<matSub[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
