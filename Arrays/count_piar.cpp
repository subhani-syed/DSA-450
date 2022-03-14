#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int count = 0;

    unordered_map<int,int>umap;
    for(int i=0;i<n;i++){
        umap[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        count = count + umap[k-arr[i]];
        if(k - arr[i] == arr[i]){
            count--;
        }
    }
    for (auto x : umap){
      cout << x.first << " " << x.second << endl;
    }
    cout<<count/2<<endl;
}