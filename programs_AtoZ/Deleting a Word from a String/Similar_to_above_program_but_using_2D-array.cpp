// Same Program using Two Dimensional Array

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[400], wrd[20], strInTwoDArray[20][20];
    int i, j=0, k=0;
    printf("Enter the String: ");
    gets(str);
    printf("Enter the Word (to be Delete): ");
    gets(wrd);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
        {
            strInTwoDArray[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            strInTwoDArray[k][j]=str[i];
            j++;
        }
    }
    strInTwoDArray[k][j] = '\0';
    j=0;
    for(i=0; i<(k+1); i++)
    {
        if(!strcmp(strInTwoDArray[i], wrd))
            strInTwoDArray[i][j]='\0';
    }
    printf("\nThe New String is: ");
    j=0;
    for(i=0; i<(k+1); i++)
    {
        if(strInTwoDArray[i][j] == '\0')
            continue;
        else
            printf("%s ", strInTwoDArray[i]);
    }
    cout<<endl;
    return 0;
}
