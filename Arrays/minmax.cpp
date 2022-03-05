#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min,max;
    if(arr[0]<arr[1])
    {
        min = arr[0];
        max = arr[1];
    }else
    {
        min = arr[1];
        max = arr[0];
    }
    for(int j=2;j<n-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            if(arr[j]>max)
            {
                max = arr[j];
            }
            if(arr[j+1]<min)
            {
                min = arr[j+1];
            }
        }
        else
        {
            if(arr[j]<min)
            {
                min = arr[j];
            }
            if(arr[j+1]>max)
            {
                max = arr[j+1];
            }
        }
    }
    cout<<"The max is "<<max<<endl;
    cout<<"The min is "<<min<<endl;
    return 0;
}