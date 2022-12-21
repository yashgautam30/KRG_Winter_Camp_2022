#include <bits/stdc++.h>
using namespace std;

int sub_zeroes_ones(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i <= size - 1; i++)
    {
        int t0 = 0;
        int t1 = 0;
        for (int j = i; j <= size - 1; j++)
        {
            if (arr[j] == 0)
            {
                t0++;
            }
            else if (arr[j] == 1)
            {
                t1++;
            }
            if (t0 == t1)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int arr[] = {0, 1, 1, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Sub-arrays: " << sub_zeroes_ones(arr, size);
}