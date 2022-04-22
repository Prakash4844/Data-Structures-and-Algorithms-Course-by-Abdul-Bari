#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

int* fun(int n);

int* fun(int n)
{
    
    int* p;
    p = new int[5];
    return p;
}


int main()
{
    int* a;
    a = fun(5);

    for(int i = 0; i < 5; i++)
    {
        cout << "a[" <<i<< "]: "<< a[i] << '\n';
    }
    
    return 0;
}
