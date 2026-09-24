#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<char>> a(n,vector<char>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)cin>>a[i][j];
  }
int x,y;
cin>>x>>y;
x--; y--;

int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
bool ans = true;
for(int i=0;i<8;i++){
    int nx= x + dx[i];
    int ny= y + dy[i];

    if(nx>=0 && nx<n && ny>=0 && ny<m){
        if(a[nx][ny] != 'x'){
            ans = false; break;
        }
    }
}


if(ans)cout<<"yes";
else cout<<"no";
    return 0;
}
