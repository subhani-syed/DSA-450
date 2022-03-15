#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>umap;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        umap[arr[i]]++;
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==target-arr[i]){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    
}