#include <iostream>
#include <fstream>

using namespace std;

class person
{
private:
    string name;
    int age;
    string address;

public:
    virtual void setinfo()
    {

        cout << "Enter info -------------" << endl;
        cout << "Enter name :";
        cin >> name;
        cout << "Enter age :";
        cin >> age;
        cout << "Enter address :";
        cin >> address;
    }

    virtual void showinfo()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Address :" << address << endl;
    }

    virtual void read_file() = 0;
    virtual void write_file() = 0;
};

class student : public person
{
private:
    int id;
    int year;
    string department;

public:
    void setinfo()
    {
        person::setinfo();
        cout << "Enter id :";
        cin >> id;
        cout << "enter year  :";
        cin >> year;
        cout << "Enter Department  :";
        cin >> department;
    }

    void showinfo()
    {
        person::showinfo();
        cout << "Student id :" << id << endl;
        cout << "Year :" << year << endl;
        cout << "Department  :" << department << endl;
    }

    void read_file()
    {
        
        ifstream infile;
        infile.open("sample.txt", ios ::binary);
        if (!infile)
        {
            cout << "Cannot open file" << endl;
            return;
        }
        infile.read((char *)this, sizeof(*this));
        cout<<"Reading from file"<<endl;
    }

    void write_file()
    {
        ofstream outfile;
        outfile.open("sample.txt", ios::app | ios::binary);
        outfile.write((char *)this, sizeof(*this));
    }
};

class teacher : public person
{
private:
    int id_no;
    double salary;
    string department;

public:
    void setinfo()
    {
        person::setinfo();
        cout << "Enter id :";
        cin >> id_no;
        cout << "enter Salary :";
        cin >> salary;
        cout << "Enter Department :";
        cin >> department;
    }

    void showinfo()
    {
        person::showinfo();
        cout << "Teacher id :" << id_no << endl;
        cout << "Salary :" << salary << endl;
        cout << "Teacher Department :" << department << endl;
    }

    void read_file()
    {
        ifstream infile;
        infile.open("sample.txt", ios ::binary);
        if (!infile)
        {
            cout << "Cannot open file" << endl;
            return;
        }
        infile.seekg(0, ios::beg);
        infile.read((char *)this, sizeof(*this));
        cout<<"Reading from file"<<endl;
    }

    void write_file()
    {
        ofstream outfile;
        outfile.open("sample.txt", ios::app | ios::binary);
        if (!outfile)
        {
            cout << "Cannot open file" << endl;
            return;
        }
        outfile.write((char *)this, sizeof(*this));
    }
};

int main()
{
    student *sample1 = new student;
    teacher *sample2 = new teacher;

    sample1->setinfo();
    sample2->setinfo();

    sample1->write_file();
    sample2->write_file();

    student *sample3 = new student;
    teacher *sample4 = new teacher;
    sample1->read_file();
    sample2->read_file();

    sample1->showinfo();
    sample2->showinfo();
}