#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

void swap(int* a, int* b); //function Prototype it takes two parameters also know as Formal Parameters (integer pointer).
// all the the data of addition function resides in addition section of stack 


void swap(int* a, int* b) 
{
    int temp;
    temp = *a; //Using Dereference to access the value of a and b
    *a = *b;
    *b = temp;
    
}

int main() 
{
    int a, b;

    cout << "Enter value of a and b: ";
    cin >> a >> b ;
    cout << '\n';

    cout << "Before swapping of a and b: " << a <<" "<< b;

    swap(&a, &b); //Here we are calling swap function (call by address) so actual parameters's address are copied in formal parameters 
    //it swap a and b but since the value is passed by call by address actual parameters a and b are swapped using there address stored in formal paramete pointers
    //but their copy(Formal Parameters) is swapped you can print them in Swap function to show swapped a and b

    cout << "\nafter swapping of a and b: " << a <<" "<< b << '\n'; //Showing Swapped a and b 
    cout << '\n';

}

//Note: 1. Main Function can access data(variables in this case) indirectly inside of swap section of the stack using Pointers.
//      2. swap Function can access data(variables in this case) indirectly inside of main section of the stack using Pointers.
//      3. Pass by address should only be used when you want to modify the actual parameter.

//Here Pass by value isn't suitable 