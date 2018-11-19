#include <iostream>
#include <fstream>
#include <strings.h>
#include <string>
#include <cstring>
using namespace std;

ifstream fin("data.in");
ofstream fout("data.out");

int main(){

    int sol = 0;
    char c;
    fin >> c;
    char x[100];
    fin.get(x, 100);
    for(int i = 0; i < strlen(x); i++){
        if(x[i] == c) sol++;
    }
    fout << sol;
}
