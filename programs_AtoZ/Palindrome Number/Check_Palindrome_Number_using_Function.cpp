// C++ Check Palindrome Number using Function

#include<iostream>
using namespace std;
int checkPalindrome(int);
int main()
{
    int num, val;
    cout<<"Enter the Number: ";
    cin>>num;
    val = checkPalindrome(num);
    if(val==0)
        cout<<"\nIt is a Palindrome Number";
    else
        cout<<"\nIt is not a Palindrome Number";
    cout<<endl;
    return 0;
}
int checkPalindrome(int n)
{
    int temp, rem, rev=0;
    temp = n;
    while(temp>0)
    {
        rem = temp%10;
        rev = (rev*10)+rem;
        temp = temp/10;
    }
    if(rev==n)
        return 0;
    else
        return 1;
}
