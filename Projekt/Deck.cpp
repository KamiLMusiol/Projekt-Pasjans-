#include <cstdlib>

#include <string>
module Deck;

const std::vector<std::string> COLOR = { "hearts", "diamonds", "clubs", "spades" };
const std::vector<std::string> TYPE = { "14", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13" };

DECK::DECK() {
    CHOOSING_AMOUNT(52);
    for (int i = 0; i < COLOR.size(); i++) {
        for (int j = 0; j < TYPE.size(); j++) {
            ADDING(i, j);
        }
    }
}

void DECK::ADDING(int i, int j) {
    CARD* a = new CARD(COLOR[i], TYPE[j]);
    TALIA.push_back(*a);
}

CARD DECK::CHOOSING_CARD() 
{
    int b = rand() % AMOUNT; // randomowe wybieranie z talii kart do tej 7
    CARD ANSWER = TALIA[b];
    TALIA.erase(TALIA.begin() + b);
    AMOUNT--;
    return ANSWER;
}