


export module Pula;
import Card;
#include <vector>
using namespace std;

export class PULA // przechowuje zbór kart
{
protected:
    
    int AMOUNT;
public:
    vector<CARD> TALIA;
    virtual void CHOOSING_AMOUNT(int a);
    void SEE();
};


