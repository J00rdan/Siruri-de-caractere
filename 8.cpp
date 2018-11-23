#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<strings.h>
using namespace std;
 
int main()
{
    char a[100]; char b[100]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char c[100];
    cout<<"a=";
    gets(a);
    int x=65;
    for(int i=0;i<strlen(a);i++)
        strupr(a);
    for(int i=0;i<strlen(b);i++)
    {c[i]=char(x);
    x=x+2;}
    c[strlen(b)]=0;
    for(int i=0;i<strlen(a);i++)
    {
        for(int j=0;j<strlen(b);j++)
        {
            if(a[i]==b[j]) {a[i]=c[j];break;}
        }
    }
   cout<<a;
}
