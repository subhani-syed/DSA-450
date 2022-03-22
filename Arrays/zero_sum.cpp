#include<bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[], int n)
{
    set<int>s;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(s.find(sum)!=s.end()||sum==0||arr[i]==0){
            return true;
        }
        s.insert(sum);
    }
    return false;
    //Your code here
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<subArrayExists(arr,n);
}