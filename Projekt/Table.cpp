#include <iostream>
module Table;

using namespace std;

TABLE::TABLE() 
{
    for (int i = 0; i < 7; i++) 
            KOLUMNY.push_back(*new PILE(i, STH));
    
}

void TABLE::SEE() 
{
    cout << "Talia z kartami:\n\n";
    STH.SEE();
    for (int i = 0; i < 7; i++) {
        std::cout << std:: endl;
        KOLUMNY[i].SEE();
    }
}
