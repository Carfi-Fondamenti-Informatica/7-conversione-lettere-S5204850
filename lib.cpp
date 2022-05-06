#include "lib.h"

bool funzione(char &myChar){
    if(myChar >= 65 && myChar <= 90){
        myChar = myChar + 32;
        return true;
    }

    if(myChar >=97 && myChar <= 122){
        myChar = myChar - 32;
        return true;
    }
    return false;
}
