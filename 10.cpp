#include <iostream>
#include <cstring>
#include <strings.h>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;

ifstream fin("in.txt");
ofstream fout("out.txt");

int main()
{
    char x[500];
    fin >> x;
    int islastchar = 0;
    for(int i = 0; i < strlen(x); i++){
        if(x[i] == '0' || x[i] == '1' || x[i] == '2' || x[i] == '3' || x[i] == '4' || x[i] == '5' || x[i] == '6' || x[i] == '7' || x[i] == '8' || x[i] == '9')
        {
            fout << x[i];
            islastchar = 1;
        }
        else if(islastchar){
            fout << " ";
            islastchar = 0;
        }
    }
    return 0;
}
