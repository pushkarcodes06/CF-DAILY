#include<bits/stdc++.h>
using namespace std;
int search(int a[],int x,int n){
    for(int i=0;i<n;i++){
if(a[i]==x){return i;break;}
    }
    return -1;
}
int main(){
    int n,q;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;

    cout<<search(a,q,n);

    return 0;
}
