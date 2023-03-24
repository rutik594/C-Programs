#include<iostream>
#include<map>
using namespace std;

//Union of two sorted arrays using map
int main()

{int n,m,value;
     map<int,int> unions;
cin>>n>>m;
int a[n],b[m];
map<int,int>::iterator iter;
for(int i=0;i<n;i++){
    cin>>a[i];
    unions.insert(pair<int,int>(a[n],1));
}
for(int i=0;i<m;i++){
    cin>>b[i];
    iter=unions.find(value);
    if(iter==unions.end()){
    unions.insert(pair<int,int>(b[m],1));}
}
for(iter=unions.begin(); iter!=unions.end();iter++){
cout<<(*iter).first;
}
    /* code */
    return 0;
}
