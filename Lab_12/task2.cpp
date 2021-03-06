#include <iostream>
using namespace std;
#include <process.h>   //for exit()
const int LIMIT = 100; //array size
////////////////////////////////////////////////////////////////
template <class T>

class safearay
{
private:
    T arr[LIMIT];

public:
    T &operator[](int n) //note: return by reference
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        return arr[n];
    }
};

template <class B>
B a_max(B arr[], int n)
{
    B max_val = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max_val < arr[i])
            max_val = arr[i];
    }

    return max_val;
}
////////////////////////////////////////////////////////////////
int main()
{
    safearay<int> sa1;
    int sample[101];
    for (int j = 0; j < LIMIT; j++) //insert elements
    {
        sa1[j] = j * 10; //*left* side of equal sign
        sample[j] = sa1[j];
    }

    cout << "Largest value :" << a_max(sample, 100);

    safearay<double> sa2;
    double sample2[50];
    double j = 0;
    for (int i = 0; i < 50; i++)
    {
        sample2[i] = 3.1416 * j;
        j++;
    }
    cout << "\nLargest value :" << a_max(sample2, 50);

    return 0;
}