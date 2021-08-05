// Modified (Complete) Version of above Program

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[200], wrd[20];
    int i, j, strLen, wrdLen, tmp, chk=0;
	int doIncrement, isSpace;
    cout<<"Enter the String: ";
    gets(str);
    cout<<"Enter the Word: ";
    cin>>wrd;
    strLen = strlen(str);
    wrdLen = strlen(wrd);
    for(i=0; i<strLen; i++)
    {
        tmp = i;
        doIncrement = 0;
        for(j=0; j<wrdLen; j++)
        {
            if(str[i]==wrd[j])
            {
                if(tmp>0 && (tmp+wrdLen)<strLen)
                {
                    if(str[tmp-1]== ' ' && str[tmp+wrdLen]==' ')
                        doIncrement=1;
                }
                else if(tmp==0 && (tmp+wrdLen)<strLen)
                {
                    if(str[tmp+wrdLen]==' ')
                        doIncrement=1;
                }
                else if(tmp>0 && (tmp+wrdLen)==strLen)
                {
                    if(str[tmp-1]== ' ')
                        doIncrement=1;
                }
                if(doIncrement==1)
                    i++;
                else
                    break;
            }
        }
        chk = i-tmp;
        if(chk==wrdLen)
        {
            i = tmp;
            for(j=i; j<(strLen-wrdLen); j++)
                str[j] = str[j+wrdLen];
            strLen = strLen-wrdLen;
            i = tmp;
            str[j]='\0';
        }
    }
    strLen = strlen(str);
    i=0;
    while(str[i]!='\0')
    {
        isSpace = 0;
        if(str[i]==' ' && str[i+1]==' ')
        {
            for(j=i; j<(strLen-1); j++)
            {
                str[j] = str[j+1];
                isSpace = 1;
            }
        }
        if(i==0 && str[i]==' ')
        {
            for(j=i; j<(strLen-1); j++)
            {
                str[j] = str[j+1];
                isSpace = 1;
            }
        }
        if(isSpace==0)
            i++;
        else
        {
            str[j]='\0';
            strLen--;
        }
    }
    cout<<"\nNew String = "<<str;
    cout<<endl;
    return 0;
}
