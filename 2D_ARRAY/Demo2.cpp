#include <iostream>
using namespace std;
int main()
{
    int arr1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[4][3] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24};
    int ans[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    //  Print The Result

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}