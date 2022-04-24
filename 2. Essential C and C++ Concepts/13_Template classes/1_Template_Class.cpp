#include<iostream>

using std::cout;
using std::cin;


// Templates are powerful features of C++ which allows us to write generic programs. 
// There are two ways we can implement templates:
// 
    // Function Templates
    // Class Templates
// 
// Similar to function templates, we can use class templates to create a single class to 
// work with different data types.
// 
// Class templates come in handy as they can make our code shorter and more manageable.

// we can make a class template class like this:
template <class T> //This is a template class this is in effect till class end 

// -----------------------------------------//Template is effective in the lines only
class Arithmatic
{
    private:
    T a, b; //here T is Generic data type it can act as any data type(int,double,char,string etc.)

    public:

    Arithmatic(T a, T b);//here T is Generic data type of parameters it can act as any data type(int,double,char,string etc.)

    T add(); //here T is Generic return type it can act as any data type(int,double,char,string etc.)
    T subtract();
};
// ------------------------------------------//Template is effective in the lines only, if we want to use template again
//we would need to write template again


//we need to use template once again to define our member function
template<class T>// -----------------------------------------//Template is effective in the lines only
Arithmatic<T>::Arithmatic(T a, T b)
{
    this->a = a;
    this->b = b;
}
// -----------------------------------------//Template is effective in the lines only


//we need to use template once again to define our member function
template<class T>// -----------------------------------------//Template is effective in the lines only
T Arithmatic<T>::add()
{
    return (a+b);
}
// -----------------------------------------//Template is effective in the lines only



//we need to use template once again to define our member function
template<class T>// -----------------------------------------//Template is effective in the lines only
T Arithmatic<T>::subtract()
{
    return (a-b);
}
// -----------------------------------------//Template is effective in the lines only

int main()
{
    Arithmatic<int> intObj(5,6); //object of type int of generic class
    cout << "Sum of Int Value: " << intObj.add() << '\n';

    Arithmatic<double> DouObj(15.4,6.8); //object of type Double of generic class
    cout << "Difference of double Value: " << DouObj.subtract() << '\n';

    cout << "Size of generic class's Object of Int type: " << sizeof(intObj) << '\n';
    cout << "Size of generic class's Object Double type: " << sizeof(DouObj) << '\n';

    return 0;
}
