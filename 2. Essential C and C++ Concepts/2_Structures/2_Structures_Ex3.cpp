//Strcucture of Playing Cards
#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

//Complex numbers are the numbers that are expressed in the form of a+ib where, a,b are real numbers 
// ‘i’ is an imaginary number called “iota”. The value of i = (√-1). 

struct PlayingCards
{
    int faceValue;//can be ace = 0 to king = 12 
    int shape;//Shapes can be Clover = 0, Spade = 1, Diamond = 3, Heart = 4
    int colour;//colour can be Red = 0 or Black = 1
};


int main()
{
    PlayingCards K30 = {12, 3, 0};

    cout << "Playing Card Facevalue: " << K30.faceValue << "\nPlaying Card Shape: " << K30.shape << "\nPlaying Card Colour: " << K30.colour;
    

    cout << "\nSize of 1 strcuture variable Playing card: "<< sizeof(K30);
    // NOTE: You can also declare and intialize an array of structure variable.

    PlayingCards CompleteDeck[52] = {{0,0,0},{0,0,1},{0,1,0}};// you can intialize a few cards

    // you can print each card's member function like this

    cout << CompleteDeck[1].faceValue; 

    //Here we have 52 structure variable each for 1 card of the deck.
    cout << "\nSize of strcuture variable CompleteDeck: "<< sizeof(CompleteDeck);
    // you can check size like this
    //each card can be accessed by its index.

    return 0;
}
