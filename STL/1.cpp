#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v1(5, 1);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v[1] = 5;
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
    v1.push_back(8);
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
    cout<<"Bs ho gya bhai";
    vector<int>v3={1,2,3,4,5};
    cout<<v3.size();
}