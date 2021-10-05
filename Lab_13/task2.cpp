#include<iostream>
using namespace std;


namespace my_namespace
{
    double temp=10.89;
    int val=12;
    
}

int temp = 30;

int main()
{
    int temp =22;
    int val=36;

    cout<<temp<<endl;
    cout<<my_namespace::temp<<endl;
    cout<<my_namespace::val<<endl;
}