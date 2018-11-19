#include <iostream>
#include <fstream>
#include <strings.h>
#include <string>
#include <cstring>
using namespace std;


int main(){

    int sol = 0;
    char c;
    cin >> c;
    char x[100];
    cin.get(x, 100);
    for(int i = 0; i < strlen(x); i++){
        if(x[i] == c) sol++;
    }
    cout << sol;
}
