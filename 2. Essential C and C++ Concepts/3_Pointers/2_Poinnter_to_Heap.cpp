#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    int* pointer;

    pointer = new int[5] {1,2,3,4,5}; //declaring and intializing an array in heap and storing it's address in pointer
    

    for(int i = 0; i < 5; i++)
    {
        cout << "\nArray[" << i << "]: " << pointer[i]; //printing array using pointer
    }
    
    delete [] pointer; //deleting dynamically allocated memory in heap
    return 0;
}
