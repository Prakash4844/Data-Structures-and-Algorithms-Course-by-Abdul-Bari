#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

struct Ractangle //Declaraing a struture
{
    int length; //Structure data Member
    int breadth;    //Structure data Member
};

int main()
{
    Ractangle* poi = new Ractangle; //Dynamically declaring a structure in heap 

    poi->length = 10;
    poi->breadth = 16;

    cout << "\nArea of Ractangle is: "<< (poi->length * poi->breadth); 
}
