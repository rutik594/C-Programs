#include <iostream>
  #include <utility>
  #include <climits>
   #include <algorithm>
using namespace std;
//find kth max and min element in an array
int main() {
	// your code goes here
	int n,k;
	//cout<<"Enter size of array: ";
	cin>>n>>k;

	int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
   cout<<"min: "<<arr[k-1]<<" max: "<<arr[n-k];
	return 0;
}
