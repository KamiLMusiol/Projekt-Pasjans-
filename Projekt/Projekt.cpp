

#include <vector>
#include <cstdlib>
#include<ctime>
using namespace std;

import Pile;
import Deck;
import Table;







int main() {
    srand(time(0));
    TABLE i;
    i.SEE();
    return 0;
}
/*
class CARD
{

    string ID;
public:
    CARD()
    {

    }
    CARD(string a, string b)
    {
        ID = a + '_' + b; // kod na każdą kartę w talii
        //  cout << ID << " ";
    }
    CARD& operator=(const CARD& other) 
    {
        if (this != &other) 
        { 
            ID = other.ID;
           
        }
        return *this;
    }
    void SEE()
    {
        cout << ID<<" ";
    }
};

class PULA
{
protected:

    vector<CARD> TALIA;
    int AMOUNT;
public:
    void SEE()
    {
        for (CARD i : TALIA)
        {
            i.SEE();
        }
    }
    void virtual CHOOSING_AMOUNT(int a) // funckja pozwalająca na wpisanie wartosci amount - potem skasuj
    {
        AMOUNT = a;
    }

};

class DECK : public virtual PULA// to z lewej
{
    
  
  

public:
    
   
    
    CARD virtual CHOOSING_CARD() //wybieranie i usuwanie kart z puli, 'a' to ilosc kart w kolumnie
    {

        int b = rand() % AMOUNT;
       
        //cout << "Wybieram numer: "<< b << endl;
        CARD ANSWER = TALIA[b];
        TALIA.erase(TALIA.begin() + b );
        AMOUNT = AMOUNT - 1;
        return ANSWER;
        
      
    }
    void  ADDING(int i, int j) // tworzenie całej talii
    {
        CARD* a = new CARD(COLOR[i], TYPE[j]);
       // cout << "Tworze karte: ";
       // a->SEE();
       // cout<<"\n";
        TALIA.push_back(*a); // tworzenie talii kard
    }
    DECK()
    {
       // cout << "Robie deck:\n\n";
        CHOOSING_AMOUNT(52);
        for (int i = 0 ; i < COLOR.size(); i++)
        {
            for (int j = 0; j < TYPE.size(); j++)
            {
            
                ADDING(i, j);
               // cout << COLOR[i] << "_" << TYPE[j]<<" ";
                

            }
            //cout << endl;
        }
    }
    friend class PILE;

};
class PILE : public virtual PULA // te 7 kolumn
{
    
    public:
  
        PILE& operator=(const PILE& other)
        {
            if (this != &other)
            {
                TALIA = other.TALIA;
                AMOUNT = other.AMOUNT;

            }
            return *this;
        }
    
    PILE(int a, DECK& KARTY)
    {
       // cout << "DSDDDSDS" << endl;
        CHOOSING_AMOUNT(a);
        CARD* c = new CARD();
        int b;
        
        
        for (int i = 0; i < AMOUNT; i++)
        {
            CARD a = KARTY.CHOOSING_CARD();
            TALIA.push_back(a);                     

        }
    }
    PILE()
    {

    }

};



class TABLE
{
    vector<PILE> KOLUMNY;
    DECK STH;
    
    public:
        TABLE()
        {
            
            
            for (int i = 0; i < 7; i++)
            { 
                PILE* a = new PILE();
             
                //KOLUMNY.push_back(*(new PILE()));
                KOLUMNY.push_back(*new PILE(i, STH));
            }

        }
        void SEE()
        {
            cout << "Talia z kartami:\n\n";
            STH.SEE();
            
            for (int i = 0; i < 7; i++)
            {
                cout << endl;
                KOLUMNY[i].SEE();
            }
            
        }




};


int main()
{

    srand(time(0));
    TABLE i;
    i.SEE();

}

*/