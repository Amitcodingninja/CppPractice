#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(6);
    v.push_back(1);
    cout << "Size of V " << v.size() << endl;
    cout << "Capacity of V " << v.capacity() << endl;
    v.pop_back();
    cout << "Size of V " << v.size() << endl;
    cout << "Capacity of V " << v.capacity() << endl;
    v.erase(v.begin() + 1);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " " << endl;
    cout << "Size of V " << v.size() << endl;
    cout << "Capacity of V " << v.capacity();
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    v.insert(v.begin() + 1, 30);
    cout << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    v[1] = 37;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    v.clear();
    cout << "Size of V " << v.size() << endl;
    cout << "Capacity of V " << v.capacity() << endl;
    return 0;
}