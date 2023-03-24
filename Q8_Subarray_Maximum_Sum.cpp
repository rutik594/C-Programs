#include<iostream>
using namespace std;
//Maximum sum of subarray - kadanes algorithm
int main()

{int n,ansstart=-1,last=-1,start;   
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
    int sum=0,maxi=INT_MIN;
    for(int i=0;i<n;i++){
         sum=sum+arr[i];
        if(sum==0){
            start=i;
            
        }
       
        if(sum<0){
            sum=0;
        }
       if(sum>maxi){
            maxi=sum;
           


        }
 ansstart=start;
            last=i;
    }
    cout<<maxi;
    return 0;
}