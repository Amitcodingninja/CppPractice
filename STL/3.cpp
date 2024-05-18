#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(4);
    arr.push_back(1);
    cout << arr.front();

    auto a = arr;
    cout << a.size();
}