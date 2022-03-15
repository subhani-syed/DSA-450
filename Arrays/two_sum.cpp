#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int>v;
    unordered_map<int,int>umap;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        umap[arr[i]]++;
        v.push_back(arr[i]);
    }
    int target;
    cin>>target;
    
    // HashMap
    for(int i=0;i<n;i++){
        if(umap.find(target-arr[i])!=umap.end()){
            int complement = target-arr[i];
            auto j = find(v.begin(),v.end(),complement);
            if(j-v.begin()!=i){
                cout<<i<<" "<<j-v.begin()<<endl;
                break;
            }
        }
    }
    
    // Iterative
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==target-arr[i]){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    
}