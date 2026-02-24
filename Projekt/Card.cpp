#include <iostream>   // wymagane dla std::cout
#include <string>     // wymagane dla std::string

module Card;

CARD::CARD() {}

CARD::CARD(std::string a, std::string b) {
    ID = a + '_' + b;
}

CARD& CARD::operator=(const CARD& other) {
    if (this != &other) {
        ID = other.ID;
    }
    return *this;
}

void CARD::SEE() {
    std::cout << ID << " ";
}