#include<set>
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }for(int i=0;i<m;i++){
        s.insert(b[i]);
    }
    cout<<s.size()<<endl;
    return 0;
}