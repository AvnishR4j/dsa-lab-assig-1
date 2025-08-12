#include <iostream>
using namespace std;
void inversion(int arr[],int n){
                for (int i = 0; i < n; i++)
              {
                            for (int j = i; j < n; j++)
                            {
                                          if (arr[i] > arr[j + 1]&&i<j)
                                          {
                                                        cout << arr[i];
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
              inversion(arr,n);
              
}