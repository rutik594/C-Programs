#include <iostream>
  #include <utility>
using namespace std;

int main() {
	// your code goes here
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<j){
      swap(arr[i],arr[j]);
      i++;
      j--;
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i];
    }
	return 0;
}
