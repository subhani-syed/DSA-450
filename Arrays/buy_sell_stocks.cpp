#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // First Approach
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]-arr[i]>profit){
    //             profit = arr[j] -arr[i];
    //         }
    //     }
    // }

    // Optimized Approach
    int least = INT32_MAX;
    int profit=0;
    for(int i=0;i<n;i++){
        if(arr[i]<least){
            least = arr[i];
        }
        if(arr[i]-least>profit){
            profit = arr[i] - least;
        }
    }
    cout<<profit;
    return 0;
}