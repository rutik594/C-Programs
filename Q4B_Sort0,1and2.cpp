#include <iostream>
#include <algorithm>
using namespace std;
//Using Dutch flag algorithm
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
        int low=0,mid=0,high=n-1;
        while(mid<high){
            switch (arr[mid])
            {
            case 0:
                swap(arr[mid],arr[low]);
                mid++;
                low++;
                break;
            case 1:
                mid++;
                
                break;
            case 2:
                swap(arr[mid],arr[high]);
                high--;
                break;
            
            default:
                break;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
        
    }
}