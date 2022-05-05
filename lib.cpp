
bool isChar(char &myChar){
    if(myChar >= 65 && myChar <= 90){
        myChar = char(myChar + 32);
        return true;
    }

    if(myChar >=97 && myChar <= 122){
        myChar = char(myChar - 32);
        return true;
    }
    return false;
}
