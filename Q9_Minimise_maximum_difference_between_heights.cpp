#include <iostream>
#include <utility>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter size of array: ";
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int mini = INT_MAX;
    int maxi = INT_MIN;
    mini = arr[0];
    maxi = arr[n - 1];
    int diff = maxi - mini;
    for (int i = 1; i < n; i++)
    {
        maxi = max(arr[i - 1] + k, arr[n - 1] - k);
        mini = min(arr[i] - k, arr[0] + k);
        diff = min(diff, maxi - mini);
    }
    return 0;
}