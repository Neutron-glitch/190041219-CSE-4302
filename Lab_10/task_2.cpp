#include <iostream>
using namespace std;

class person
{
private:
    string name;
    int age;
    //person (const person& p ){};
    // person operator = (const person& p){}
public:
    person(string a = "not given", int b = 0) : name(a), age(b)
    {
    }

    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    void display() const
    {
        cout << "Name :" << name << "  Age :" << age << endl;
    }

    person operator=(person &p) // operator overloading
    {
        name = p.name;
        //return person(name, age);
        return *this;
    }

    person(person &p) // con
    {
        name = p.name;
        age = -5;
    }
};

int main()
{
    person p1("tom", 12), p2;
    p1.display();
    p2.display();

    p2 = p1;
    p2.display();

    person p3 = p1;
    p3.display();

    person *a = new person();
    a->display();
}