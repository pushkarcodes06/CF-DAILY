#include<bits/stdc++.h>
using namespace std;
void func(int i,int j,int n){
    if(i == n/2 && j == n/2)cout<<"X";
    else if( i == j)cout<<"\\";
    else if(i + j == n-1)cout<<"/";
    else cout<<"*";
}
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            func(i,j,n);
        }cout<<"\n";
    }
    return 0;
}
