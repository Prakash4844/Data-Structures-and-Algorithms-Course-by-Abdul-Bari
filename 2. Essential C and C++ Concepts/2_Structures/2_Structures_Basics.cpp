#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

/*
A structure is a user-defined data type in C/C++. 
A structure creates a data type that can be used to group items of possibly different types into a single type. 

Structures in C++ can contain two types of members:  
1. Data Member: These members are normal C++ variables. We can create a structure with variables of different data types in C++.
2. Member Functions: These members are normal C++ functions. Along with variables, we can also include functions inside a structure declaration.
*/

struct Ractangle //Declaraing a struture
{
    int length; //Structure data Member
    int breadth;    //Structure data Member
};

//In the above structure, the data members are two integer variables to store length and breadth of any ractangle.
//The size of structure in memory can be calculated as a sum of all data members of the structure.
//since a int variable takes 4 byte of space and our structure have two int data members so 4+4=8
//Our structure variable take 8 bytes of space.

// NOTE: Structure itself doesn't take any space, only structure variable takes space when defined.

int main()
{

    //Note: In C++, the struct keyword is optional before in declaration of a variable. In C, it is mandatory. since we are using CPP we have omitted it

    Ractangle r1; //Declaring Strcuture variable r1 of type ractangle.

    Ractangle r = {5, 8};   //declaration and intialization of Strcuture variable r of type ractangle.
    //in this first value under {} is assigned to first Structure data Member(length) and second value is assigned to second Structure data Member(breadth)

    r.length = 10; //Accessing and overwriting Structure data Member length with the use of '.' operator
    r.breadth = 20; //Accessing and overwriting Structure data Member breadth with the use of '.' operator

    cout << "Area of Ractangle is: "<< (r.length * r.breadth); //Printing Area of Ractangle using strcture data members

    return 0;
}
