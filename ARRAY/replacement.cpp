#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        if(i != n-1)
        {if(a[i]>0)cout<<"1 ";
        if(a[i]<0)cout<<"2 ";
        if(a[i]==0)
        cout<<"0 ";
    }else{if(a[i]>0)cout<<"1";
        if(a[i]<0)cout<<"2";
        if(a[i]==0)
        cout<<"0";
    }
      }
    return 0;
}
