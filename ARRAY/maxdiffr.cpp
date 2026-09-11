
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++){
        max = max(a[i],max);
        min = min(a[i],max);
    }
    int imax=0,imin=0;
     for(int i=0;i<n;i++){
        if(a[i]==max)imax++;
        if(a[i]==min)imin++;
 
 
    }
 
    cout<<max-min<<" "<<imax*imin;
    return 0;
}
