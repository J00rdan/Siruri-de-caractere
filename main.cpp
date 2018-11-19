#include <iostream>
#include <fstream>
#include <strings.h>
#include <string>
#include <cstring>
using namespace std;


int main(){

    char x[21];
    cin >> x;
    for(int i = 0; i < strlen(x); i ++) x[i] = toupper(x[i]);
    for(int i = 0; i < strlen(x); i ++) cout << x[i];
}
