#include <iostream>
using namespace std;
void printsumdig(int matrix[][4], int row, int col)
{
    int first = 0;
    int sec = 0;
    // 1st Diagonal
    int i = 0;
    while (i < row)
    {
        first += matrix[i][i];
        i++;
    }
    // Second Diagonal
    i = 0;
    int j = col - 1;
    while (j >= 0)
    {
        sec += matrix[i][j];
        i++, j--;
    }
    cout << first << " " << sec;
}
int main()
{

    int matrix[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    printsumdig(matrix, 4, 4);

    // for (int row = 0; row < 3; row++)
    //     for (int col = 0; col < 4; col++)
    //         cout << arr[row][col] << " ";
}