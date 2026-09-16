#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]<=10)
       cout<<"A["<<i<<"] = "<<a[i]<<"\n";
    }
      return 0;
}
