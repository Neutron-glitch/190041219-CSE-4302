#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

class Car
{
private:
    string model_No;
    double price;

public:
    Car(string a = "Not given", double b = 0) : model_No(a), price(b)
    {
    }
    //  void setinfo()
    // {

    //     cout << "Enter info -------------" << endl;
    //     cout << "Enter model no :";
    //     cin >> model_No;
    //     cout << "Enter Price:";
    //     cin >> price;
    // }

    void set_modelno(string s)
    {
        model_No = s;
    }

    void set_price(double s)
    {
        price = s;
    }

    string get_Model()
    {
        return model_No;
    }

    double get_price()
    {
        return price;
    }

    void Display()
    {
        cout << "Model no :" << model_No << endl;
        cout << "Price :" << price << endl;
    }

    
};

void sortbyprice(vector<double> v)
{
    sort(v.begin() , v.end());

    cout<<"so the sorted price is "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<< "  ";
    }


}


int main()
{
    Car sample[5];
    vector<double> vec;

    for(int i=0; i<5;i++)
    {   
        string a;
        double b;
        cout<<"Enter model and price :"<<endl;
        cin>>a;
        cin>>b;
        sample[i].set_modelno(a);
        sample[i].set_price(b);

        vec.push_back(b);

    }

    sortbyprice(vec);




}