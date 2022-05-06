#include <iostream>
#include "lib.cpp"
using namespace std;
int main() {
    char input;
    cin >> input;
    if(isChar(input)) cout <<"Vero"<< input << endl;
    else cout << "errore"<<endl;
    return 0;
}

