//chech wheather the the array is sorted or not
#include <bits/stdc++.h>
using namespace std;
bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
    /*if(arr[0]<arr[1]&& restArray){
        return true;
        we can code this as return(arr[0]<arr[1]&&restArray);
    */
}
int main()
{
    int arr[] = {1, 2, 5, 8, 9};
    cout << sorted(arr, 5);
    return 0;
}