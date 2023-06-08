#include "Deck.h"
int main(){
    Deck deck;
    int r;
    cin >> r;
    deck.setCards(deck.createDeck());
    deck.Shuffle(r);
    deck.distribute();
    deck.show(deck.getPlayer1());
    deck.show(deck.getPlayer2());
}