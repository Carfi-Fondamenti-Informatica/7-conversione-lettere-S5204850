#include <iostream>
#include "lib.cpp"
using namespace std;
int main() {
    char input;
    cin >> input;
    cout << endl;
    if(isChar(input)) cout <<"Vero: "<< input << endl;
    else cout << "errore"<<endl;
    return 0;
}

