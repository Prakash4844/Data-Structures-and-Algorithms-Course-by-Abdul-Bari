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
    Ractangle r = {5, 8};   

    Ractangle* ractPointer; //Pointer of type Ractangle 
    ractPointer = &r;   //ractPointer pointing to structure variable 'r'

    //for accessing a structure data member that belongs to a structure variable using pointer we have two syntax
    //Using 1st Syntax
    (*ractPointer).breadth = 10;
    (*ractPointer).length = 6; //we need *ractPointer in parenthesis due to '.' operator having higher precedency than '*' operator

    cout << "\nArea of Ractangle is: "<< ((*ractPointer).breadth * (*ractPointer).breadth); //Printing Area of Ractangle using strcture data members which are accessed by pointers using syntax of type 1

    //OR

    //Using 2nd Syntax (Recommended)

    ractPointer->length = 20; //Here instead of using (*ractPointer).breadth you can just use "->" Operator which is much easier and less error prone
    ractPointer->breadth = 12;

    cout << "\nArea of Ractangle is: "<< (ractPointer->length * ractPointer->breadth); //Printing Area of Ractangle using strcture data members which are accessed by pointers using syntax of type 2

    return 0;
}