#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    float sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    sum /= n;

    cout<<fixed<<setprecision(12)<<sum;
    
    return 0;
}
