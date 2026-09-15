#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t];
    long long sum =0;
    for(int i=0;i<t;i++){
        cin>>a[i];
    }   
    for(int i=0;i<t;i++){
        cout<<a[t-i-1]<<" ";
    } 
    return 0;
}
