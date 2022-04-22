// Structure as Parameters Being Passed by Value

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

struct Ractangle //Declaraing a struture
{
    int length; //Structure data Member
    int breadth;    //Structure data Member
};

int area(Ractangle r1); //Forward Declaration it should be below Structure otherwise It would return Error as
                    //Ractangle not in this scope

int area(Ractangle r1) //Taking a Ractangle Structure parameter which is passed by Value
{
    return (r1.length*r1.breadth); //Returning Area
}


int main()
{
    
    Ractangle r = {5, 10}; //Declaring a Ractangle Structure and Intializing length as 5 and breadth as 10
    
    cout << "Area of Ractangle r: "<<area(r);//Printing the Value returned by area Function

    return 0;
}
