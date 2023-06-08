#include "Deck.h"
void Deck::Shuffle(int r){
    srand(r);
    for (int i = 0; i < 52; ++i){
        int j = rand() % 52;
        swapByReference(cards[i], cards[j]);
    }
}
void Deck::swapByReference(Card& card1, Card& card2) {
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}
void Deck::swapByAddress(Card* card1, Card* card2) {
    Card temp = *card1;
    card1 = card2;
    *card2 = temp;
}
Card* Deck::createDeck() {
    Card* deck = new Card[DECK_SIZE];
    for (int i = 1; i < 14; i++) {
        for (int j = 1; j < 5; j++) {
            deck[(i - 1) * 4 + (j - 1)] = i * 1.0 + j * 0.1;
        }
    }
    return deck;
}
void Deck::sortCard() {
    
}
void Deck::distribute() {
    for (int i = 0; i < 26; i++) {
        *(player1 + i) = *(cards + i);
    }
    for (int i = 26; i < 52; i++) {
        *(player2 + i - 26) = *(cards + i);
    }
}
void Deck::printCard(int parameter)const {

}
Card* Deck::getPlayer1() {
    return player1;
}
Card* Deck::getPlayer2() {
    return player2;
}
Card* Deck::getPlayer1(int pos) {
    return player1 + pos;
}
Card* Deck::getPlayer2(int pos) {
    return player2 + pos;
}
void Deck::show(Card* parameter)const {
    for (int i = 0; i < 3; i++) {
        parameter->print();
    }
    cout << "----------"<<endl;
}
void Deck::compare() {
    for (int i = 0; i < 3; i++) {
        if (getPlayer1(i)->getCard() * 10 < 30 && getPlayer2(i)->getCard() * 10 > 30) {
            cout << "Game" << i << ":" << endl << "player1 win" << endl;
        }
        else if (getPlayer1(i)->getCard() * 10 > 30 && getPlayer2(i)->getCard() * 10 < 30) {
            cout << "Game" << i << ":" << endl << "player2 win" << endl;
        }
        else if (getPlayer1(i)->getCard() > getPlayer1(i)->getCard()) {
            cout << "Game" << i << ":" << endl << "player1 win" << endl;
        }
        else if (getPlayer1(i)->getCard() < getPlayer1(i)->getCard()) {
            cout << "Game" << i << ":" << endl << "player2 win" << endl;
        }
    }
}
void Deck::setPlayer1(Card* player1) {        //
    this->player1 = player1;
}
void Deck::setPlayer2(Card* player2) {        //
    this->player2 = player2;
}
void Deck::setCards(Card* cards) {     //
    this->cards = cards;
}