#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    t=1;
    while(t--){
        int m,n;
        cin>>m>>n;
        int a[m][n];
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)cin>>a[i][j];}
        int x;
        bool ans = false;
        cin>>x;
              for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
         if(a[i][j] == x)ans = true;}
            

            if(ans){
              cout<<"will not take number\n";
            }else   cout<<"will take number\n";}
    
    return 0;
}
