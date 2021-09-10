#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int size)
{
    int counter = 1;
    while (counter < size)
    {
        for (int i = 0; i < size - counter; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    bubbleSort(array, n);
    return 0;
}