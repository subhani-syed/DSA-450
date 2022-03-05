#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=-1,high;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            low++;
            swap(arr[low],arr[i]);
        }else if (arr[i]>0){
            high = low+1;
            swap(arr[high],arr[i]);
        }
    }
    cout<<"The elements after rearranging are"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}