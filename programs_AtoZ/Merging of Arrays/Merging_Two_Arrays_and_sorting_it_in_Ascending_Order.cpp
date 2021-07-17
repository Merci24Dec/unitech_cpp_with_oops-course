// C++ Merge Two Arrays in Ascending Order

#include<iostream>
using namespace std;
int main()
{
    int arrOne[50], arrTwo[50], arrMerge[100];
    int sizeOne, sizeTwo, sizeMerge, i, j, temp;
    cout<<"Enter the Size for First Array: ";
    cin>>sizeOne;
    cout<<"Enter the Size for Second Array: ";
    cin>>sizeTwo;
    cout<<"\nEnter "<<sizeOne<<" Elements for First Array: ";
    for(i=0; i<sizeOne; i++)
        cin>>arrOne[i];
    cout<<"\nEnter "<<sizeTwo<<" Elements for Second Array: ";
    for(i=0; i<sizeTwo; i++)
        cin>>arrTwo[i];
    // merging the two arrays
    for(i=0; i<sizeOne; i++)
    {
        arrMerge[i] = arrOne[i];
    }
    for(j=0; j<sizeTwo; j++)
    {
        arrMerge[i] = arrTwo[j];
        i++;
    }
    sizeMerge = i;
    // sorting the merged array in ascending order
    for(j=0; j<(sizeMerge-1); j++)
    {
        for(i=0; i<(sizeMerge-1); i++)
        {
            if(arrMerge[i]>arrMerge[i+1])
            {
                temp = arrMerge[i];
                arrMerge[i] = arrMerge[i+1];
                arrMerge[i+1] = temp;
            }
        }
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<sizeMerge; i++)
    {
        if(i==(sizeMerge-1))
            cout<<arrMerge[i];
        else
            cout<<arrMerge[i]<<" ";
    }
    cout<<endl;
    return 0;
}
