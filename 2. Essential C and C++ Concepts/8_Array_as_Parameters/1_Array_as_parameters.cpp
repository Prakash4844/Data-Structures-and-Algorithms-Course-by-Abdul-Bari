#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

void fun(int a[], int n); //fun function take two parameter first an int array and second an integer that is size of the array
            //Since first parameter is an array(don't mention size) C++ knows a is an array so our parameter here a[]
            //is actually a pointer to array a 

// Note: [void fun(int a[], int n);] is used as  [void fun(int *a, int n);] but the difference is *a can point to
        //any integer or array but a[] is a pointer to an array only

void fun(int a[], int n)
{
    //If array is changed in this function then actual array in main funtion will be changed.
    a[3] = 5;
    a[2] = 7;
    for(int i = 0; i < n; i++)
    {
        cout << "a[" <<i<< "]: "<< a[i] << '\n';
    }
}


int main()
{
    int a[6] = { 4, 6, 46, 34, 9, 4}; //int Array of size 6
    
    fun(a, 6); //Here we are passing parameter just as we would do in Pass by Value but a is an array 
    //Array is passed by address and arrays can't be passed by

    return 0;
}
