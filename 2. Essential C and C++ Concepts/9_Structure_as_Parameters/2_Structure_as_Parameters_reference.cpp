// Structure as Parameters Being Passed by Reference

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

struct Ractangle //Declaraing a struture
{
    int length; //Structure data Member
    int breadth;    //Structure data Member
};

int area(Ractangle &r1); //Forward Declaration it should be below Structure otherwise It would return Error as
                    //Ractangle not in this scope

int area(Ractangle &r1) //Taking a Ractangle Structure parameter which is passed by refernce(&) here new struture r1 is not created by r1 is used
{                       //as alternate name for structure r
    r1.length = 6; //  it modifies the value of length which is part of ractangle structure r1.
    return (r1.length*r1.breadth); //Returning Area
}


int main()
{
    
    Ractangle r = {5, 10}; //Declaring a Ractangle Structure and Intializing length as 5 and breadth as 10
    
    cout << "Area of Ractangle r: "<<area(r) << '\n';//Here function call will be replaced by function body itself.

    cout << "Modified value of r1.length is same as r.length: "<<r.length; //We changed r1.length which in changed r.length as r1 is just another name for r

    return 0;
}
