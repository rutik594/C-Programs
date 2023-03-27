#include <iostream>
#include <utility>
#include <climits>
#include <algorithm>
using namespace std;
//{1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
int minJumps(int arr[], int n)
{
    //cout << "kmck";
    int maxi,sum,steps,jump;
    maxi=arr[0];
    sum=arr[0];
    steps=arr[0];
    jump=1;
    if(n==1) return 0;
    else if(arr[0]=0) return -1;
    else{
    for(int i=1;i<n;i++){
        sum=max(maxi,i+arr[i]);
        steps--;
        if(sum==0){
            maxi=sum;
            if(i>maxi){
                return -1 ;
            }
        }
        steps=maxi-i;
    }
    }
    // Your code here
    /*int i = 0, j = 0, maxi = INT_MIN, index = 0, count = 0, sum = 0;
    while (j < n && sum<n)
    {
        while (i < arr[j])
        {
            if (sum < n)
            {
                sum = i + 1 + arr[j + i + 1];
                cout << "sum : " << sum;
                if (sum > maxi)
                {
                    maxi = sum;
                    index = i + j + 1;
                }
                i++;
            }
            else
            {
                break;
            }
        }
        j = index;
        count++;
    }*/
    return;
}
int main()
{
    int n;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout<<i;
    }

    cout << minJumps(arr, n);
    return 0;
}
