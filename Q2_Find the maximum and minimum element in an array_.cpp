#include <iostream>
  #include <utility>
  #include <climits>
using namespace std;

int main() {
	// your code goes here
	int n;
	//cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
   int min=INT_MAX,max=INT_MIN;
   for (int i = 0; i < n; i++) {
       if(min>arr[i]){
           min=arr[i];
           //cout<<i<<" pass: "<<min<<endl;
       }
        if(max<arr[i]){
           max=arr[i];
       }
   }
   
    cout<<"max value: "<<max<<" min value: "<<min;
	return 0;
}
