

export module Pile;
import Pula;
import Deck;

export class PILE : public virtual PULA // ta7 której mamy sie pozbyc
{
public:
    PILE();
    PILE(int a, DECK& KARTY);
    PILE& operator=(const PILE& other);
};