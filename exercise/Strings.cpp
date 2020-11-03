#include <stdio.h>
#include <iostream>
#include <string>

int main() {
    string s = "Bock auf ne Runde CS?";
    s += " Ja sehr gerne";
    s.insert(23," Jimmy");
    cout << s.length;
    cout << s;
    return 0;
}