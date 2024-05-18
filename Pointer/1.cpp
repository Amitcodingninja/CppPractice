#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;
  // int *ptr = arr + 4;
  // cout << arr << endl;
  // cout << arr + 0 << endl;
  // cout << &arr[0] << endl;
  // cout << ptr << endl;
  // cout << arr + 1 << endl;
  // cout << &arr[1] << endl;
  // cout << endl;

  // // Print the value of 0 index
  // cout << arr[0] << endl;
  // cout << *arr << endl;
  // cout << *(arr + 0) << endl;
  // cout << *ptr << endl;
  // cout << endl;

  // // Sare Address and Value  ko print krna
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << *(arr + i) << " ";
  //   cout << (arr + i) << " ";
  // }

  // Ptr ki help se Adress and Value print krna
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << ptr[i] << " ";
  // }
  // cout << endl;
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << ptr + i << " ";
  // }

  // cout << endl;
  // Arithmetic Operation in ptr++,ptr --

  // for (int i = 0; i < 5; i++)
  // {
  //   cout << *ptr << " ";
  //   ptr++;
  // }
  // cout << endl;
  // Opposite order like 5 4 3 2 1
  // for (int i = 4; i >= 0; i--)
  // {
  //   cout << *ptr << " ";
  //   ptr--;
  // }

  // Addition
  ptr = ptr + 3;
  cout << *ptr << endl;
  ptr = ptr - 2;
  cout << *ptr << endl;

  return 0;
}