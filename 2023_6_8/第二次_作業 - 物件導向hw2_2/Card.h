#ifndef C_H
#define C_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Card {
public:
    Card();
    Card(double);
    string getSuit()const;
    string getSymbol()const;
    void print()const; 
    void setCard(double);
    double getCard()const;
private:
    vector<string> St = { "Club", "Diamond", "Heart", "Spade" };
    vector<string> Sl = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
    int suit;
    int symbol;
    double card;
};
#endif