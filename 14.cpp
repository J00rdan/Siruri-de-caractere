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
int last_char_isnt_space;

int main(){

    fin.get(text, 300);
    for(int i = 0; i < strlen(text); i++){
        if(text[i] != ' ') fout << text[i], last_char_isnt_space = 1;
        else if(last_char_isnt_space == 1) fout << text[i], last_char_isnt_space = 0;
    }

}
