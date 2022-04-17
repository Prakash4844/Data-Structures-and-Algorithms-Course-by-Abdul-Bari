// Structure of Complex No.

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

//Complex numbers are the numbers that are expressed in the form of a+ib where, a,b are real numbers 
// ‘i’ is an imaginary number called “iota”. The value of i = (√-1). 

struct Complex
{
    int real;
    int imaginary;
};


int main()
{
    Complex N1 = {2, 3};

    cout << "Complex N1: " << N1.real << "+" << N1.imaginary << "i";
    
    return 0;
}
