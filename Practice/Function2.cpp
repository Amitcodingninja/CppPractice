#include <iostream>
using namespace std;

bool Prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int fact(int n=3)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)

        ans = ans * i;
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << Prime(a);
    cout << endl;
    cout << fact(b);
    cout << endl;
    cout << fact(b - a);
    return 0;
}