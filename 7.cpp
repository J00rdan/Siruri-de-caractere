#include <iostream>
#include <cstring>
#include <strings.h>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
    int sol = 0;
    char c[100];
    char str[100];
    cin >> c;
    cin.get(str, 100);

    char *pch;
    pch = strtok (str," ,.-");

    while (pch != NULL)
    {
        if(strcmp(pch, c) == 0){
            sol++;
        }
        pch = strtok (NULL, " ,.-");
    }
    cout << sol;
    return 0;
}
