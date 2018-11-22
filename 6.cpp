#include <iostream>
#include <cstring>
#include <strings.h>
#include <string>
using namespace std;

int main()
{
    int sol = 0;
    char x[100];
    cin.get(x, 100);
    for(int i = 0; i < strlen(x); i++){
        cout << x[i] << endl;
        if(x[i] == ' ' || x[i] == '.') sol ++;
    }
    cout << sol;
    return 0;
}
