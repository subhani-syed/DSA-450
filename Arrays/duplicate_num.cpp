#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    // HashMap Approach
    unordered_map<int,int>umap;
    for(int i=0;i<n;i++){
        umap[nums[i]]++;
    }
    for(auto x:umap){
        if(x.second>1){
            cout<<x.first<<endl;
        }
    }

    // Flyod's Cycle Detection
    int fast = nums[0];
    int slow = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow!=fast);
    
    fast = nums[0];

    while(slow!=fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    cout<<fast<<endl;
}