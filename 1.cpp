#include <iostream>
#include <fstream>
#include <strings.h>
#include <string>
#include <cstring>
using namespace std;

int palindrom(char x[]){
    for(int i = 0; i < strlen(x); i ++){
        if(x[i] != x[strlen(x) - i - 1]){
            return 0;
        }
    }

    return 1;
}

int main(){

    char x[21];
    cin >> x;
    cout << palindrom(x) << endl;

}
