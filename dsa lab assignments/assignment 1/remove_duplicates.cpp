#include <iostream>
using namespace std;
void sorting(int arr[100], int n)
{
              for (int i = 0; i < n - 1; i++)
              {
                            for (int j = 0; j < n - 1 - i; j++)
                            {
                                          if (arr[j] > arr[j + 1])
                                          {
                                                        int temp = arr[j];
                                                        arr[j] = arr[j + 1];
                                                        arr[j + 1] = temp;
                                          }
                            }
              }
}
int main()
{
              int n, arr[100];
              cout << "Enter the number of elements in the array: ";
              cin >> n;
              for (int i = 0; i < n; i++)
              {
                            cout << "Enter element at index " << i << " ";
                            cin >> arr[i];
              }
              sorting(arr, n);
             
              for (int i = 0; i < n; i++)
              {
                            if (arr[i] > arr[i + 1] || arr[i] < arr[i + 1])
                            {
                                          cout << arr[i];
                            }
              }
}