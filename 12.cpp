#include <iostream>
#include <fstream>
#include <strings.h>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

char second[300];
char first[300];
int vocale[2][5];

int main(){

    gets(first);
    gets(second);

    for(int i = 0; i < strlen(first); i++) {
        switch(first[i]){
            case 'a' : {vocale[0][0] ++; break;}
            case 'e' : {vocale[0][1] ++; break;}
            case 'i' : {vocale[0][2] ++; break;}
            case 'o' : {vocale[0][3] ++; break;}
            case 'u' : {vocale[0][4] ++; break;}
        }
    }
    for(int i = 0; i < strlen(second); i++) {
        switch(second[i]){
            case 'a' : {vocale[1][0] ++; break;}
            case 'e' : {vocale[1][1] ++; break;}
            case 'i' : {vocale[1][2] ++; break;}
            case 'o' : {vocale[1][3] ++; break;}
            case 'u' : {vocale[1][4] ++; break;}
        }
    }
    int minn = 10000000;
    int vocala;
    for(int i = 0; i < 4; i++){
        if(vocale[0][i] != 0 && vocale[1][i] != 0){
            int nr_aparitii = vocale[0][i] + vocale[1][i];
            if(nr_aparitii < minn) minn = nr_aparitii, vocala = i;
        }
    }
    switch(vocala){
        case 0 : {cout << 'a'; break;}
        case 1 : {cout << 'e'; break;}
        case 2 : {cout << 'i'; break;}
        case 3 : {cout << 'o'; break;}
        case 4 : {cout << 'u'; break;}
    }
    cout << " " << minn;

}
