#ifndef D_H
#define D_H
#include "Card.h"
class Deck{
public:
    void Shuffle(int);
    void swapByReference(Card&, Card&);
    void swapByAddress(Card*, Card*);
    Card* createDeck();
    void sortCard();
    void distribute();
    void printCard(int)const;
    Card* getPlayer1();
    Card* getPlayer2();
    Card* getPlayer1(int);
    Card* getPlayer2(int);
    void show(Card*)const;
    void compare();
    void setPlayer1(Card*);     //
    void setPlayer2(Card*);     //
    void setCards(Card*);      //
private:
    static const int DECK_SIZE = 52;
    Card* player1;
    Card* player2;
    Card* cards;
};
#endif