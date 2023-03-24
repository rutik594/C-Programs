#include <iostream>
using namespace std;
//counting technique
void sort(int arr[], int n)
{

    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        if (arr[i] == 1)
        {
            one++;
        }
        if (arr[i] == 2)
        {

            two++;
        }
    }

    for (int i = 0; i < zero; i++)
    {
        arr[i] = 0;
    }
    for (int i = zero; i < zero + one; i++)
    {
        arr[i] = 1;
    }
    for (int i = zero + one; i < n; i++)
    {
        cout << "Hi";
        arr[i] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {

        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, n);
    }

    return 0;
}
