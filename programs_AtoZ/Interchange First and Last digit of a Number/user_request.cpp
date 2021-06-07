// C++ Interchange positions of any Two Digits in a Number as per user's request.

#include<iostream>
using namespace std;
int main()
{
    int num, posFirst, posSecond;
    int rem, temp, rev=0, noOfDigit=0, arr[10], i;
    cout<<"Enter the Number: ";
    cin>>num;
    temp = num;
    while(temp>0)
    {
        temp = temp/10;
        noOfDigit++;
    }
    if(noOfDigit==1)
    {
        cout<<"\nIt is a Single-digit Number!";
        cout<<"\nTry again with a Number with Two or More Digits!";
    }
    else
    {
        cout<<"\nInterchange the Digit at Position: ";
        cin>>posFirst;
        cout<<"With Digit at Position: ";
        cin>>posSecond;
    }
    if(posFirst>noOfDigit || posSecond>noOfDigit)
        cout<<"\nInvalid Position!";
    else
    {
        temp = num;
        while(temp>0)
        {
            rem = temp%10;
            rev = (rev*10)+rem;
            temp = temp/10;
        }
        for(i=0; i<noOfDigit; i++)
        {
            rem = rev%10;
            arr[i] = rem;
            rev = rev/10;
        }
        i=0;
        temp = arr[posFirst-1];
        arr[posFirst-1] = arr[posSecond-1];
        arr[posSecond-1] = temp;
        cout<<"\nDigits Interchanged Successfully!";
        cout<<"\n\nNew Number = ";
        for(i=0; i<noOfDigit; i++)
            cout<<arr[i];
    }
    cout<<endl;
    return 0;
}
