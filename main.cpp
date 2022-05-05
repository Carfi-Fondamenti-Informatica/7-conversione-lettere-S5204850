#include <iostream>

int main(){int main() {
    char input;
    cout<<"Inserisci qualcosa: ";
    cin >> input;
    cout << endl;
    if(isChar(input)) cout <<"Vero: "<< input << endl;
    else cout << "Falso"<<endl;
    return 0;
}

