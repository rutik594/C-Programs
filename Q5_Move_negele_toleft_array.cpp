#include <iostream>
#include <algorithm>
using namespace std;
//Moving all negative elements to left of array-Using Dutch flag algorithm
int main()
{   int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            /* code */
        }
        int positive=0,negative=0;
        while(positive<n && negative<n){
            if(arr[negative]<0){
                swap(arr[positive],arr[negative]);
                negative++;
                positive++;
            }
            else{
                negative++;
            }

        }
         for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
            /* code */
        }
   
    
 }
}