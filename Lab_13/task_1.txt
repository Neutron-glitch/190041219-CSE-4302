#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> even(50);
    vector<int> odd(50);

    int temp = 2;
    for(int i=0;i<50;i++)
    {
        even[i]=temp;
        temp=temp+2;
    }

    temp =1;
     for(int i=0;i<50;i++)
    {
        odd[i]=temp;
        temp=temp+2;
    }

    vector<int> merging(100);

    merge(even.begin(),even.end(),odd.begin(),odd.end(),merging.begin());

    for(int i=0;i<merging.size();i++)
    {
        cout<<merging[i]<< " ";
    }


}