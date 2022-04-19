//NOTE: Reference is only supported in C++

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

void swap(int &a, int &b);  //it takes two int that are passed by reference/alias it is not a new variable 

void swap(int &a, int &b) //due to pass by reference swap function becomes part of main funtion
{                           //That is why it can access the data directly.
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "\nafter swapping of a and b: " << a <<" "<< b << '\n'; //Showing Swapped a and b 
}

int main() 
{
    int a, b;

    cout << "Enter value of a and b: ";
    cin >> a >> b ;
    cout << '\n';

    cout << "Before swapping of a and b: " << a <<" "<< b;

    swap(a, b); //Here we are calling swap function so actual parameters are copied in formal parameters But since swap function
    //takes reference so it does actually change the actual parameters, it is known as pass by reference. 
    //it swap a and b but since the value is reference, actual parameters a and b are really swapped

    
    cout << '\n';

}

//Note: 1. Main Function can access data(variables by reference in this case) inside of swap section(Now part of main) of the stack.
//      2. swap Function can access data(variables by reference in this case) inside of main section(Now part of main) of the stack.
//      3. Pass by Value should only be used when you want to modify the actual parameter.
//Here are our source code is Procedural oriented but machine code is monolithic code 
//Try to avoid call by reference while programming just like you would with goto statement.