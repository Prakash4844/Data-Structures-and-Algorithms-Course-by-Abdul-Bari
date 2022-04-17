// Structure of student.

#include<iostream>
#include<string>
//using namespace std;
using std::cout;
using std::cin;
using std::string; //For using strings


struct Student
{
    string Name;
    int age;
    int rollno;
    long int phoneno;
};


int main()
{
    Student S1 = {"Captain Jack Sparrow", 13, 28, 1234567890};

    cout << "Student Name: " << S1.Name <<'\n'<< "Student Age: " << S1.age <<'\n' 
                << "Student Roll no.: " << S1.rollno <<'\n' << "Student Phone no.: " << S1.phoneno <<'\n';
    
    cout << "Size of S1 variable: " << sizeof(S1) << '\n'; //you can check structure variable size using sizeof operator

    //You can also check the indiviaual size of data members like this.
    cout << "Size of S1.Name: " << sizeof(S1.Name) << '\n';
    cout << "Size of S1.age: " << sizeof(S1.age) << '\n';
    cout << "Size of S1.rollno: " << sizeof(S1.rollno) << '\n';
    cout << "Size of S1.phonenp: " << sizeof(S1.phoneno) << '\n';

    //the size of a string object is fixed at compile-time and does not change at runtime, 
    //regardless of how many characters are stored inside the string.
    //if you do not understand this then just ignore it.
    return 0;
}