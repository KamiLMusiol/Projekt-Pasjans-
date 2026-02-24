#include <string>
#include <iostream>

export module Card;

export class CARD {
    std::string ID;// kod na ka¿d¹ kartê w talii
public:
    std::string zwroc_nazwe()
    {
        return ID;
    }
    CARD();
    CARD(std::string a, std::string b);
    CARD& operator=(const CARD& other);
    void SEE();
};