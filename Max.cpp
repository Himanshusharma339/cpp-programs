#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] ={7,4,10,0,20,4,1,6,8};
    int n =  sizeof(arr)/sizeof(arr[0]);
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
            mx=max(mx,arr[i]);  
    }
       cout<<mx;
}