// Check Prime or Not using Class
#include<iostream>
using namespace std;
class CodesCracker
{
    private:
        int num, i, chk;
    public:
        int getData();
        int checkPrimeNumber(int);
};
int CodesCracker::getData()
{
    cout<<"Enter a Number: ";
    cin>>num;
    return num;
}
int CodesCracker::checkPrimeNumber(int num)
{
    int i, chk=0;
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            chk++;
            return chk;
        }
    }
    return chk;
}
int main()
{
    CodesCracker c;
    int num, chk=0;
    num = c.getData();
    chk = c.checkPrimeNumber(num);
    if(chk==0)
        cout<<"\nIt is a Prime Number";
    else
        cout<<"\nIt is not a Prime Number";
    cout<<endl;
    return 0;
}
