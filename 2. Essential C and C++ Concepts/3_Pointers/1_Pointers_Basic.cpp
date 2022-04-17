#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    //What are Pointers?
    //A pointer is a variable whose value is the address of another variable, 
    //i.e., direct address of the memory location. Like any variable or constant, 
    //you must declare a pointer before using it to store any variable address.
    
    //Why use pointer?
    //There are two types of memory 1. Stack 2. Heap
    //Programme have direct access to stack.
    //but heap can't be accessed directly, for accessing a variable in heap we need to use pointer to store its memory address
    //pointers are also used for passing reference as parameters in functions.

    //a int pointer can store a int variable's memory address
    //a float pointer can store a float variable's memory address and so on.
    //void pointer can hold address of any type of variable.

    int a = 10; //Normal integer variable
    int* pointer;   //an integer pointer(Declaration) which can hold the memory address of an integer

    pointer = &a;   //Intialization of a pointer with the address of 'a' variable

    // above we used ampersand sign (&). This sign is called the reference operator. 
    //If the reference operator is used you will get the “address of” a variable.

    int* pointer2 = &a; //Declaration and intialization

    // float ab;
    // int *ptr = &ab;       // ERROR, type mismatch ab is of float type which is being assigned to int pointer


    cout << "pointer: " << *pointer <<"\npointer2: " << *pointer2 <<'\n';

    
    //We also used the asterisk sign (*) in the cout statement. 
    //This sign is called the dereference operator. 
    //If the dereference operator is used you will get the “value pointed by” a pointer.

    // Below two Statements below print same address the first one print value of pointers which is address of a
    //second one just print the address of a using reference operator
    cout << "Address stored in pointer: " << pointer <<"\nAddress stored in pointer2: " << pointer2 <<'\n';
    cout << "Address of a: " << &a;


    return 0;
}

//While declaring/initializing the pointer variable, * indicates that the variable is a pointer.
//The address of any variable is given by preceding the variable name with Ampersand &.
//The declaration int *a doesn't mean that a is going to contain an integer value. It means that a is going to contain the address of a variable storing integer value.
//To access the value of a certain address stored by a pointer variable * is used. Here, the * can be read as 'value at'.
