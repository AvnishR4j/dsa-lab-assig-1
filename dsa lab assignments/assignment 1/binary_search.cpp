#include <iostream>
using namespace std;
int main()
{
              int n, low, high, mid, arr[100], target;
              cout << "Enter the number of elements in the array: ";
              cin >> n;
              cout << "Enter the elements of the array: ";
              for (int i = 0; i < n; i++)
              {
                            cin >> arr[i];
              }
              cout << "enter element to be searched: ";
              cin >> target;
              low = 0;
              high = n - 1;
              mid = (low + high) / 2;
              while (low <= high)
              {
                            if (arr[mid] == target)
                            {
                                          cout << "Element found at position " << mid + 1 << endl;
                                          return 0;
                            }
                            else if (target > arr[mid])
                            {
                                          low = mid + 1;
                            }
                            else
                            {
                                          high = mid - 1;
                            }
              }
              cout << "element not found in an array<<endl";
              return 0;
}

// selection sorting
// insertion sorting (best approach)
