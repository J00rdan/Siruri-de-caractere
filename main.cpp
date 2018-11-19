#include <iostream>
#include <fstream>
#include <strings.h>
#include <string>
#include <cstring>
using namespace std;

ifstream fin("palindrom.in");
ofstream fout("palindrom.out");

int palindrom(char x[]){
    for(int i = 0; i < strlen(x); i ++){
        if(x[i] != x[strlen(x) - i - 1]){
            return 0;
        }
    }

    return 1;
}

int n;

int main(){
    fin >> n;

    for(int i = 1; i <= n; i++){
        char x[21];
        fin >> x;
        cout << palindrom(x) << endl;
    }

}
