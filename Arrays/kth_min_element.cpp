#include <algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"The "<<k<<"th minimun is "<<arr[k-1]<<endl;
    cout<<"The "<<k<<"th maximum  is "<<arr[n-(k)] <<endl;
    return 0;
}