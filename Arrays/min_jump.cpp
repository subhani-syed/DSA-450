#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){
        int jump = 1;
        int maxR = arr[0];
        int steps = arr[0];
        if(n==1){
            return 0;
        }else if(arr[0]==0){
            return -1;
        }
        else{
            for(int i=1;i<n;i++){
                if(i==n-1){
                    return jump;
                }
                maxR = max(maxR,i+arr[i]);
                steps--;
                if(steps==0){
                    jump++;
                    steps = maxR - i;
                }
                if(i>=maxR){
                    return -1;
                }
            }
        }
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minJumps(arr,n);
    return 0;
}