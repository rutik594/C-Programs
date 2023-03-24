#include<iostream>
using namespace std;
//rotate array by one clockwise
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    
    int temp=0;
    
    temp=arr[n-1];
    cout<<"temp:"<<temp;
    for (int i = n-1; i >0; i--)
    {
       arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i];
    }
    
    
    return 0;
}
