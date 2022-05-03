#include<iostream>

using std::cout;
using std::cin;

int* inputArray(int n);
void reverseArray(int* p, int n);

int* inputArray(int n)
{
    int* p;
    p = new int[n];

    cout << "==================================" << '\n';

    for(int i = 0; i < n; i++)
    {
        cout << "Enter Element a[" << i <<"]: ";
        cin >> p[i];
    }

    cout << "==================================" << '\n';

    for(int i = 0; i < n; i++)
    {
        cout << "Array Element a[" << i <<"]: " << p[i] << '\n';
    }

    return p;
}

void reverseArray(int* p, int n)
{
    int* r;
    r = new int[n];
    int temp;
    int count = 0;

    for(int i = n-1; i >= 0; i-- )
    {
        temp = p[i];
        r[count] = temp;
        count++;
    }

    cout << "==================================" << '\n';

    for(int i = 0; i < n; i++)
    {
        cout << "Revered Array Element a[" << i <<"]: " << r[i] << '\n';
    }

}



int main()
{
    int n; //Integer for Holding Array Size
    int* p; //Integer pointer Which will Point to a dynamic array

    cout << "Enter Array Size: ";
    cin >> n;   //Get The length of an array

    p = inputArray(n); // p pointing to 1st array elements which was returned by function
    reverseArray(p, n);

    return 0;
}
