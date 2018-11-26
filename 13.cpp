#include <iostream>
#include <fstream>
#include <strings.h>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

ifstream fin("data.in");
ofstream fout("data.out");

char text[300];
char cuvinte[100][100];
int n;
int k;
int sol[100];
int nr_cuvinte_unice;

int main(){

    fin.get(text, 300);

    char *pch;
    pch = strtok (text," ,.-");

    while (pch != NULL)
    {
        strcpy(cuvinte[++k], pch);
        pch = strtok (NULL, " ,.-");
    }


    for(int i = 1; i < k; i++){
        for(int j = i + 1; j <= k; j ++){
            if(strcmp(cuvinte[i], "already checked") != 0)
                if(strcmp(cuvinte[i], cuvinte[j]) == 0 && strcmp(cuvinte[j], "already checked") != 0){
                    sol[i]++;
                    strcpy(cuvinte[j], "already checked");
                    nr_cuvinte_unice ++;
                }
        }
    }
    for(int i = 1; i <= k; i++)
        if(strcmp(cuvinte[i], "already checked") != 0)
            fout << cuvinte[i] << " " << sol[i] + 1 << endl;

}
