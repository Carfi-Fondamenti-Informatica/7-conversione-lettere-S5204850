#include <iostream>
#include "lib.cpp"

using namespace std;

int main() {
    char input;
    cout<<"Inserisci qualcosa: ";
    cin >> input;
    if(funzione (input)) cout <<"Vero"<< input << endl;
    else cout << "errore"<<endl;    return 0;
}

