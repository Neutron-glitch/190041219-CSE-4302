#include <iostream>

using namespace std;

class Book
{
private:
    string name;
    string author;
    string publisher;

public:
    virtual void setinfo()
    {

        cout << "Enter info -------------" << endl;
        cout << "Enter book name :";
        cin >> name;
        cout << "Enter author :";
        cin >> author;
        cout << "Enter publisher :";
        cin >> publisher;
    }

    virtual void showinfo()
    {
        cout << "Name :" << name << endl;
        cout << "Author :" << author << endl;
        cout << "Publisher:" << publisher << endl;
    }
};

class Academic : public Book
{
private:
    string topic;

public:
    void setinfo()
    {
        Book::setinfo();
        cout << "Enter book topic :";
        cin >> topic;
    }
    void showinfo()
    {   
        Book::showinfo();
        cout << "book topic :";
        cout << topic;
    }
};

class Entertainment : public Book
{
private:
    string genre;

public:
    void setinfo()
    {
        Book::setinfo();
        cout << "Enter book genre:";
        cin >> genre;
    }
    void showinfo()
    {
        Book::showinfo();
        cout << "book genre :";
        cout << genre;
    }
};

int main()
{
    Book *sample1[5];

    for (int i = 0; i < 5; i++)
    {
        sample1[i] = new Academic;
        sample1[i]->setinfo();
    }
    for (int i = 0; i < 5; i++)
    {
        
        sample1[i]->showinfo();
        cout<<endl;
    }

    delete sample1[0];
    delete sample1[1];
    delete sample1[2];
    delete sample1[3];
    delete sample1[4];


    Book *sample[5];

    for (int i = 0; i < 5; i++)
    {
        sample[i] = new Entertainment;
        sample[i]->setinfo();
    }
    for (int i = 0; i < 5; i++)
    {
        
        sample[i]->showinfo();
        cout<<endl;
    }

    delete sample[0];
    delete sample[1];
    delete sample[2];
    delete sample[3];
    delete sample[4];
}