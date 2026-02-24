export module Deck;
//import Card;
import Pula;

export class DECK : public virtual PULA //  pula kart z której bierzemy kraty
{
public:
    DECK();
    CARD CHOOSING_CARD();
    void ADDING(int i, int j);
    friend class PILE;
};
