#include <iostream>
using namespace std;

int sum(int a, int b) // Function Decleare
{
    int ans = a + b; // Function  Define
    cout << ans;
}
int Mul(int m, int n)
{
    int ans = m * n;
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;
    sum(a, b);
    cout << endl;
    cout << Mul(a, b);
    return 0;
}