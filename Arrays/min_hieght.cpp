#include <bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    int tempmin, tempmax;
    tempmin = arr[0];
    tempmax = arr[n - 1];
    for (int i = 1; i < n; i++) {
        if(arr[i]-k<0)
            continue;
        tempmin= min(arr[0] + k,arr[i] - k);
        tempmax = max(arr[n - 1] - k,arr[i - 1] + k);
        ans = min(ans, tempmax - tempmin); 
    }
    return ans;
}
int main()
{
    int k,n;
    cin>>k>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = getMinDiff(arr, n, k);
    cout << ans;
}