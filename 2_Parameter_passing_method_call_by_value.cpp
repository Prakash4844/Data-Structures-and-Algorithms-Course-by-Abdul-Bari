#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

void swap(int a, int b); 

void swap(int a, int b) 
{
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

    swap(a, b); //Here we are calling swap function (call by value) so actual parameters are copied in formal parameters 
    //it swap a and b but since the value is passed by call by value actual parameters a and b are not really swapped
    //but their copy(Formal Parameters) is swapped you can print them in Swap function to show swapped a and b

    
    cout << '\n';

}

//Note: 1. Main Function can't access data(variables in this case) inside of swap section of the stack.
//      2. swap Function can't access data(variables in this case) inside of main section of the stack.
//      3. Pass by Value should only be used when you don't want to modify the actual parameter.

//Here Pass by value isn't suitable 