// Fibonacci Series using Function

#include<iostream>
using namespace std;
void FiboOfNTerm(int);
void FiboUptoGivenNumber(int);
int main()
{
    int ch, N, limit;
    do
    {
        cout<<"1. Fibonacci Series of N Term\n";
        cout<<"2. Fibonacci Series upto Given Number\n";
        cout<<"3. Exit\n";
        cout<<"Enter Your Choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nEnter the Value of N: ";
                cin>>N;
                FiboOfNTerm(N);
                break;
            case 2:
                cout<<"\nEnter the Number (Limit): ";
                cin>>limit;
                FiboUptoGivenNumber(limit);
                break;
            case 3:
                return 0;
            default:
                cout<<"\nWrong Input!";
                break;
        }
        cout<<"\n\n";
    }while(ch==1 || ch==2);
    cout<<endl;
    return 0;
}
void FiboOfNTerm(int tot)
{
    int i, a=0, b=1, c, temp;
    for(i=1; i<=tot; i++)
    {
        if(i==1)
            c = 0;
        else if(i==2 || i==3)
            c = 1;
        else
        {
            temp = a;
            a = b;
            b = c;
            c = a+b;
        }
        cout<<c<<"  ";
    }
}
void FiboUptoGivenNumber(int limit)
{
    int i, a=0, b=1, c, temp;
    for(i=1; ; i++)
    {
        if(i==1)
            c = 0;
        else if(i==2 || i==3)
            c = 1;
        else
        {
            temp = a;
            a = b;
            b = c;
            c = a+b;
        }
        if(c>limit)
            break;
        cout<<c<<"  ";
    }
}
