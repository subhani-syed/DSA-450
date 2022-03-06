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
    int temp = arr[n-1];
    int curr;
    for(int i=0;i<n;i++){
        curr = arr[i];
        arr[i] = temp;
        temp = curr;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}