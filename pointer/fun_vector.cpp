#include<iostream>
#include<vector>
using namespace std;
void printvalue(int value)
{
    cout<<"value: "<<value<<endl;
}

void foreach(const vector<int> &values, void (*func)(int))
{
    for (int value :values)
        func(value);

}

int main()
{
    vector<int>values = {1,2,3,4,5};
    foreach(values ,printvalue);

}