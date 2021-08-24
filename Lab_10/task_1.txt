#include <iostream>
#include <cmath>

using namespace std;

class person
{
    private:
        string name;
        int age;
    public:
        person(string a="invalid name" , int b=0): name(a) , age(b)
        {

        }
    virtual void pure_vir_func()=0; // pure vitual function declaring

    virtual void virtual_func() // virtual function 
    {
        cout<<"Base class calling"<<endl;
    }
};

class student : public person
{
    private:
        int id;
    public:
        student(int a=0): id(a)
        {

        }

    void virtual_func()
    {
        cout<<"Derived class calling"<<endl;
    }

    void pure_vir_func()
    {
        cout<<"Derived class pure virtual function"<<endl;
    }
        
};

int main()
{
    person *p;  // base class pointer
    student sample;  // derived class object
    p= &sample;  // base class pointer pointing to derived class object

    //person *p = new student();

    p->pure_vir_func();  // calling the pure virtual function
    p->virtual_func();  // calling the virtual function of derived class
    p-> person:: virtual_func();


    return 0;
}