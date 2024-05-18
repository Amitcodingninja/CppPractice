#include <iostream>
using namespace std;
int main()
{
    int sum = INT64_MIN;
    int index = 0;

    int arr1[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 1};
    for (int row = 0; row < 4; row++)
    {
        int total = 0;
        for (int col = 0; col < 3; col++)
        {
            total += arr1[row][col];
            if (sum < total)
            {
                sum = total;
                index = row;
            }
        }
    }
    cout << "Index No. is : " << index;

    return 0;
}