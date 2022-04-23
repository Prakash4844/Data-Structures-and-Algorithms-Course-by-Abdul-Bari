//Here we will be discussing Classes and Constructor
//These are Feature of CPP and Not C

//For Learning more about constructor see this: https://www.programiz.com/cpp-programming/constructors
//For Learning more about classes and Objects see this: https://www.programiz.com/cpp-programming/object-class
//For Learning more about Access Specifiers see this: https://www.programiz.com/cpp-programming/access-modifiers

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class Ractangle //Declaraing a class
{
    private: //Private access specifier 

    int length; //class data Member
    int breadth;    //class data Member

    // -------------------------------------------------------------

    // void intialize(Ractangle *r0, int l, int b) //Ractangle r0 pointer points to class Object r
    // {
    //     r0->length = l;
    //     r0->breadth = b;
    // }
    /////////////////////We Need not use intialize function this can be done using constructor

    public: //Public access specifier

    Ractangle(int l, int b) //construtor that take two int parameter. constructor have no return type and same name as class name
    {
        length = l; //intializing length using l
        breadth = b;     //intializing breadth using b
    }
    // -----------------------------------------------------------------------------------------

    int area()
    {
        return (length*breadth); //Returning Area
    }

    // ----------------------------------------------------------------------------------------
    void modifyLength(int l)
    { 
        length = l; //  it modifies the value of length which is part of ractangle class object r 
    }

};

// -------------------------------------------------------------------------------------------------
//Driver code
int main()//Main Doesn't have any statements of it's own only function calls
{
    
    Ractangle r(5, 10); //Declaring a Ractangle class object and Intializing length as 5 and breadth as 10 using Constructor
    
    //r.intialize(&r, 10, 5);
    r.area();
    r.modifyLength(20);

    cout << "Size of Object r or class Ractangle is: " << sizeof(r); //Here we can check the size of object r just like we can do with strucrture
    
    return 0;
}