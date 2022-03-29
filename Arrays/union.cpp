#include<bits/stdc++.h>
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
    // // Using Set

    // set<int>s;
    // for(int i=0;i<n;i++){
    //     s.insert(a[i]);
    // }for(int i=0;i<m;i++){
    //     s.insert(b[i]);
    // }
    // cout<<s.size()<<endl;

    //Using Hashmap 
    map<int,int>ump;
    for(int i=0;i<n;i++){
        if(ump.find(a[i])==ump.end()){
            ump[a[i]]++;
        }
    }
    for(int i=0;i<m;i++){
        if(ump.find(b[i])==ump.end()){
            ump[b[i]]++;
        }
    }
    map<int, int>::iterator itr;
    for (itr = ump.begin(); itr != ump.end(); ++itr) {
        cout<< itr->first<<" ";
    }
    return 0;
}