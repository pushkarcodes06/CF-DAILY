#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n],c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
long long min =a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min)
       min = a[i];
    }
    
    for(int i=0;i<n;i++){
        if(a[i]==min)
       c++;
    }

    if(c%2==0){
        cout<<"Unlucky";
    }else
    cout<<"Lucky";
      return 0;
}
