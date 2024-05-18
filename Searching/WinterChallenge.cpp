#include <iostream>
using namespace std;

int findValue(int x, int m)
{
    for (int n = 1; n < m; n++)
    {
        if ((x * n) % m == 1)
        {
            return n;
        }
    }
    return -1;
}
int main()
{
    int x, m;
    cin >> x >> m;
    cout << findValue(x, m) << endl;
    return 0;
}