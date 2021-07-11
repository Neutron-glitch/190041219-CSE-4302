#include <iostream>

using namespace std;

class Counter
{
private:
    int count ;
    int step_value;

public:
    Counter(int c=0) : count(c)
    {
    }

    void setIncrementStep(int step_val = 1)
    {
        step_value = step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count = count + step_value;
    }
    void resetCount()
    {
        count = 0;
    }
    int getstep()
    {
        return step_value;
    }

    friend Counter operator+(const Counter& lop , const Counter& rop );
    friend  Counter operator+(const Counter& lop , int var);
};

 Counter operator+(const Counter& lop , const Counter& rop)
 {
    //return Counter(count + r_count.count );

    Counter temp ; 
    temp.count=lop.count + rop.count;
    if( lop.step_value < rop.step_value)
        temp.step_value = lop.step_value;
    else
        temp.step_value = rop.step_value;

    return temp ;

 }

 Counter operator+(const Counter& lop , int var)
 {
    // return Counter(lop.count + var);

     Counter temp ; 
     temp.count=lop.count + var;
     




 }




int main()
{
    Counter c1, c2 ,c3(5);
    c2.setIncrementStep(10);c3.setIncrementStep(15);

    c1 = c2+c3;

    cout<<c1.getCount()<<endl;

    cout<<c1.getstep()<<endl;

   


    return 0;
}