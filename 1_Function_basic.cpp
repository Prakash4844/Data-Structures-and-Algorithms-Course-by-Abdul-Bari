#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int addition(int x, int y); //function Prototype it takes two parameters also know as Formal Parameters (integer variable).
// all the the data of addition function resides in addition section of stack 

int addition(int x, int y) //Function Header or Function Signature
{
    return (x+y); //The Addition Function returns an integer, once the value is returned all the data inside addition section of the stack in discarded
}

int main() //Main function, all the the data of main function resides in main section of stack 
{
    int a, b, c; //3 variable of type int

    cout << "Enter value of a and b: ";
    cin >> a >> b ;
    cout << '\n';

    c = addition(a, b); //Function Call passing two arguments using pass by value, arguments are also known as actual parameters
    // Here in Function call a and b are passed to addition Function's parameters x and y
    // Here value returned from function is stored in variable c
    cout << "Addition of a and b: " << c;
    cout << '\n';

}

//Note: 1. Main Function can't access data(variables in this case) inside of addition section of the stack.
//      2. Addition Function can't access data(variables in this case) inside of main section of the stack.