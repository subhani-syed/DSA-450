#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of Elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curSum = 0;
    int maxSum = arr[0];
    for(int i=0;i<n;i++){
        curSum = curSum+arr[i];
        if(curSum>maxSum){
            maxSum = curSum;
        }
        if(curSum<0){
            curSum = 0;
        }
    }
    cout<<"max sum is "<<maxSum<<endl;
}