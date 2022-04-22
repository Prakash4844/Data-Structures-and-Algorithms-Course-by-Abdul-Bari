//Passing array data memeber of a Structure as Pass by value.
//Normally array passed by value is not supported 

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

struct Test //Declaraing a struture
{
    int a[5]; //Structure data Member
    int b;    //Structure data Member
};

int fun(Test var1);

int fun(Test var1)
{
    for(int i = 0; i < 5; i++)
    {
        cout << var1.a[i] <<'\n';
    }
}

int main()
{
    Test var = {{0, 1, 2, 3, 4}, 6};
    
    cout << fun(var); //Structure can be passed by value even if it has a array data member
    return 0;
}
