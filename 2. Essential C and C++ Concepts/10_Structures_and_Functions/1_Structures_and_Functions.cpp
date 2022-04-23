//This formatting will be used in rest of the course, This style of programming will lead to OOPS which we will study shortly
//This is the best style of coding you can do in C language.
#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

struct Ractangle //Declaraing a struture
{
    int length; //Structure data Member
    int breadth;    //Structure data Member
};

// -------------------------------------------------------------

void intialize(Ractangle *r0, int l, int b) //Ractangle r0 pointer points to rectangle structure r
{
    r0->length = l;
    r0->breadth = b;
}

// -----------------------------------------------------------------------------------------

int area(Ractangle r1) //Taking a Ractangle Structure parameter which is passed by Value
{
    return (r1.length*r1.breadth); //Returning Area
}

// -------------------------------------------------------------------------------------------------------------------------------------------------

void modifyLength(Ractangle* p, int l) //Taking a Ractangle Structure adress in pointer as parameter 
                                            // which is passed by address here new struture is not created.
{                                                    //but r is accessed by its address that is stored in pointer p
    p->length = l; //  it modifies the value of length which is part of ractangle structure r which is accessed by pointer p using -> operator.
}

// -------------------------------------------------------------------------------------------------------------------------------------------------

//Driver code
int main()//Main Doesn't have any statements of it's own only function calls
{
    
    Ractangle r = {5, 10}; //Declaring a Ractangle Structure and Intializing length as 5 and breadth as 10
    
    intialize(&r, 10, 5);
    area(r);
    modifyLength(&r, 20);
    
    return 0;
}