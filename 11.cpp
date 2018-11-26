#include <iostream>
#include <fstream>
#include <strings.h>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

char c[100];
char first[100];
char sol[100][50];
int k = 0;

int main(){

    cin >> c;
    strncpy(first, c, strlen(c));
    while(strcmp(c, "stop")){
        if(lexicographical_compare(first, first + strlen(first), c, c + strlen(c))) strncpy(sol[++k], c, strlen(c));
        cin >> c;
    }
    for(int i = 1; i <= k; i++) cout << sol[i] << endl;
}
