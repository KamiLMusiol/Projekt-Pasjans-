module Pile;

PILE::PILE() {} 

PILE::PILE(int a, DECK& KARTY) {
    CHOOSING_AMOUNT(a + 1);
    for (int i = 0; i < AMOUNT; i++) {
        CARD a = KARTY.CHOOSING_CARD();
        TALIA.push_back(a);
    }
}

PILE& PILE::operator=(const PILE& other) {
    if (this != &other) {
        TALIA = other.TALIA;
        AMOUNT = other.AMOUNT;
    }
    return *this;
}