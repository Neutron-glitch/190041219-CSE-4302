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
    T& operator[](int n) //note: return by reference
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds";
            exit(1);
        }
        return arr[n];
    }
};
////////////////////////////////////////////////////////////////
int main()
{
    safearay<int> sa1;
    for (int j = 0; j < LIMIT; j++) //insert elements
        sa1[j] = j * 10;            //*left* side of equal sign
    for (int j = 0; j < LIMIT; j++) //display elements
    {
        int temp = sa1[j]; //*right* side of equal sign
        cout << "Element " << j << " is " << temp << endl;
    }



    safearay<double> sa2;
    for (int j = 0; j < LIMIT; j++) //insert elements
        sa2[j] = 100.564;            //*left* side of equal sign
    for (int j = 0; j < LIMIT; j++) //display elements
    {
        double temp1 = sa2[j]; //*right* side of equal sign
        cout << "Element " << j << " is " << temp1 << endl;
    }
    
    return 0;
}