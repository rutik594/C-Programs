#include <iostream>
#include <map>
#include<vector>
using namespace std;
//intersection of two sorted arrays - using two pointer -- Time Complexity - O(m+n) Space complexity - O(1)
int main()

{   vector<int> ans;
    int m, n;
  
    cin>>m>>n;
    int a[m], b[n];
    int i=0,j=0;
     for(int i=0;i<m;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
    }
    while(i<m && j<n){
     
        if(a[i]>b[j]){
        j++;
    }
    else if(a[i]<b[j]){
        i++;
    }
    else{
        ans.push_back(a[i]);
        i++;
        j++;
    }
    
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}