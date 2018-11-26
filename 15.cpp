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
int n;

int main(){

    fin >> n;
    for(int i = 1; i <= n; i++){
        fin >> text;
        text[0] = toupper(text[0]);
        fout << text << endl;
    }

}
