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
    // Kadane's Algorithm
    int currSum = 0;
    int maxSum = arr[0];
    for(int i=0;i<n;i++){
        if(currSum<0){
            currSum = 0;
        }
        currSum += arr[i];
        if(currSum>maxSum){
            maxSum = currSum;
        }
    }
    cout<<"max sum is "<<maxSum<<endl;
}