#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class Ractangle //Declaraing a class
{
    private: //Private access specifier 

    int length; //class data Member
    int breadth;    //class data Member

    public: //Public access specifier

    Ractangle();
    Ractangle(int l, int b);

// =============================
    int area(); //Funtion header

    int perimeter();

    void modifyLength(int l);

    ~Ractangle();

};

Ractangle::Ractangle()//Default Constructor
{
    length = breadth = 1;
}

Ractangle::Ractangle(int l, int b)///construtor that take two int parameter(Parameterized Constructor). constructor have no return type and same name as class name
{
    length = l; //intializing length using l
    breadth = b;     //intializing breadth using b
}

int Ractangle::perimeter()
{
    return (2*(length+breadth)); //Returning Perimeter
}

int Ractangle::area()
{
    return (length*breadth); //Returning Area
}

Ractangle::~Ractangle()//Destructor
{

}

void Ractangle::modifyLength(int l)
{ 
    length = l; //  it modifies the value of length which is part of ractangle class object r 
}


// -------------------------------------------------------------------------------------------------
//Driver code
int main()//Main Doesn't have any statements of it's own only function calls
{
    
    Ractangle r(5, 10); //Declaring a Ractangle class object and Intializing length as 5 and breadth as 10 using Constructor
    
    //r.intialize(&r, 10, 5);
    cout << "Area: " << r.area() << '\n';
    r.modifyLength(20);
    cout << "perimeter: " << r.area() << '\n';

    cout << "Size of Object r or class Ractangle is: " << sizeof(r) << '\n'; //Here we can check the size of object r just like we can do with strucrture
    
    return 0;
}