#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reversed Array is "<<endl;
    
    // Approach 1
    // int rev[n];
    // for(int i=0;i<n;i++){
    //     rev[i] = arr[n-1-i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<rev[i]<<" ";
    // }

    // Approach 2
    int start= 0 ;
    int end = n-1;
    while (start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
    return 0;
}