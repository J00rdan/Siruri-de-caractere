#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;

int main()
{
    char a[50][50],temp1[50],temp2[50],c[50][50]; int n;
    cout<<"nr cuvinte: ";cin>>n;int i,j,k;
    for(i=0;i<=n;i++)
    gets(a[i]);
    for(k=0,i=0;k<=n,i<=n;k++,i++)
    strcpy(c[k],a[i]);
    for(i=0;i<=n;i++) strlwr(a[i]);

    for (i=0;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)

    {
        if (strcmp(a[i], a[j]) > 0)

    {
        strcpy(temp1, a[i]);
    strcpy(a[i], a[j]);
    strcpy(a[j], temp1);

    strcpy(temp2, c[i]);
    strcpy(c[i], c[j]);
    strcpy(c[j], temp2);}}}
    for(i=0;i<=n;i++)
    puts(c[i]);
}
