#include "bits/stdc++.h"
using namespace std;
int binarySearch(int array[], int key, int size)
{
    int s = 0, e = size;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int a;
    cin >> a;
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    int key;
    cin >> key;
    cout << binarySearch(array, key, a);
    return 0;
}