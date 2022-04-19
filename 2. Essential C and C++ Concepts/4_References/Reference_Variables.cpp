//Reference are only supported in C++ and not C
#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    int a = 10; //Normal int variable
    
    //reference variable is an alias, that is, another name for an already existing variable. 
    //Once a reference is initialized with a variable, 
    //either the variable name or the reference name may be used to refer to the variable.

    int &b = a; //reference variable b which have same memory address as variable a
    //note: A reference must be initialized when it is created.

    //Both Prints same thing
    cout << "Value of a: " << a;
    cout << "\nValue of b: " << b;

    a++; 

    //Both Prints same thing
    cout << "\nValue of a: " << a;
    cout << "\nValue of b: " << b;

    b++;

    //Both Prints same thing
    cout << "\nValue of a: " << a;
    cout << "\nValue of b: " << b;

    //Both Prints same thing
    cout << "\nAddress of a: " << &a;   //--|==> a and b have to same memory address
    cout << "\nAddress of b: " << &b;   //--|

    
    
    return 0;
}
