//This Covers the very basic of the arrays.

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    //An array in C/C++ or be it in any programming language is a collection of similar data items
    //stored at contiguous memory locations.They can be used to store collection of primitive data types 
    //such as int, float, double, char, etc of any particular type. 
    //An array in C/C++ can store derived data types such as the structures, pointers etc.

    int arr[5]; //This is an array declaration it contain 5 integers with index starting from 0
    // NOTE: identifier arr is a pointer to first array element.
    // Array elements can be accessed randomly using there index in a constant time.
    
    int brr[5] = {1,2,3,4,5}; //This is an array declaration and intialization.
    // it contain 5 integers with index starting from 0 and ending with 4
    // at each index the intialized element is stored.
    
    // You can access the element of the array using their index like this brr[0] it access element at 0th index which will be 1.
    //Now we are going to print all element of array using a for loop in C/C++


// ============= Printing Array in C/CPP ========================
    for(int i = 0 ; i < sizeof(brr)/sizeof(brr[0]) ; i++) // here we are calculating size of array by dividing the total size of array by size of one element
    {
        printf("brr[%d]: %d \n", i , brr[i]); // Printing array in C style using printf function.
    }

    for(int i = 0 ; i < sizeof(brr)/sizeof(brr[0]) ; i++) // here we are calculating size of array by dividing the total size of array by size of one element
    {
        cout<<"brr["<<i<<"]: "<<brr[i]<<'\n'; // Printing array in CPP style using cout.
    }

// ============= Taking input in Array in C/CPP ========================

    for(int i = 0 ; i < sizeof(brr)/sizeof(brr[0]) ; i++) // here we are calculating size of array by dividing the total size of array by size of one element
    {
        printf("Enter Value of arr[%d]: ", i); 
        scanf("%d", &arr[i]);   // Taking input in array in C style using printf function.
    }

    for(int i = 0 ; i < sizeof(brr)/sizeof(brr[0]) ; i++) // here we are calculating size of array by dividing the total size of array by size of one element
    {
        printf("arr[%d]: %d \n", i , arr[i]); // Printing array in C style using printf function.
    }


    for(int i = 0 ; i < sizeof(brr)/sizeof(brr[0]) ; i++) // here we are calculating size of array by dividing the total size of array by size of one element
    {
        cout<<"Enter Value of arr["<<i<<"]: ";
        cin>>arr[0]; // Taking input in array in CPP style using cin function.
    }

    for(int i = 0 ; i < sizeof(brr)/sizeof(brr[0]) ; i++) // here we are calculating size of array by dividing the total size of array by size of one element
    {
        cout<<"arr["<<i<<"]: "<<arr[i]<<'\n'; // Printing array in CPP style using cout.
    }

    return 0;
}