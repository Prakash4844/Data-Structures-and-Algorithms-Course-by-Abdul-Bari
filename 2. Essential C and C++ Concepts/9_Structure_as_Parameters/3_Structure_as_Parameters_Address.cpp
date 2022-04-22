// Structure as Parameters Being Passed by Address

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

struct Ractangle //Declaraing a struture
{
    int length; //Structure data Member
    int breadth;    //Structure data Member
};

void modifyLength(Ractangle* p); //Forward Declaration it should be below Structure otherwise It would return Error as
                    //Ractangle not in this scope

void modifyLength(Ractangle* p) //Taking a Ractangle Structure adress in pointer as parameter which is passed by address here new struture is not created.
{                       //but r is accessed by its address that is stored in pointer p
    p->length = 6; //  it modifies the value of length which is part of ractangle structure r which is accessed by pointer p using -> operator.
}


int main()
{
    
    Ractangle r = {5, 10}; //Declaring a Ractangle Structure and Intializing length as 5 and breadth as 10
    
    modifyLength(&r); //Passing address of structure ractangle r 
    cout << "modifyLength of Ractangle r: "<< r.length<< '\n';//Here function call will be replaced by function body itself.

    return 0;
}
