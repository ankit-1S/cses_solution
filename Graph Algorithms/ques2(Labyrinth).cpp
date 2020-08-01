// problem set link -- https://cses.fi/problemset/  
 
/* UserName - ankit_S
  author- Ankit kumar
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std; 
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long 
#define MOD 1000000007
const int N=1001;
vector<string>arr(N);
int n,m;
int cx[4]={0,1,0,-1};
int cy[4]={1,0,-1,0};
char mov[4]={'R','D','L','U'};
char path[N][N];
pair<int ,int >pos[N][N];

bool valid(int i,int j){
    return (i>=0)&& (i<n) && (j>=0)&& (j<m) &&(arr[i][j]=='.' || arr[i][j]=='B' );
}
 
int main(){
    
    cin>> n>>m;
    int si,sj;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int fx=-1,fy=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='A'){ 
                si=i;
                sj=j;
            }
            if(arr[i][j]=='B'){
                fx=i;
                fy=j;
            }
        }
    }
    queue<array<int,2>>que;
    que.push({si,sj});
    
    bool flag=false;
    while(!que.empty()){
        auto temp=que.front();
        int x=temp[0],y=temp[1];
        que.pop();
        if(x==fx && y==fy){
            flag=true;
            break;
        }

        for(int i=0;i<4;i++){
            int nx=x+cx[i];
            int ny=y+cy[i];
            if(valid(nx,ny)){
                que.push({nx,ny});
               
                pos[nx][ny]={x,y};
                path[nx][ny]=mov[i];
                
                arr[nx][ny]='#';
            }
        }   
            
    } 
    if(!flag){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        string ans="";
        while(arr[fx][fy]!='A'){
            ans+=path[fx][fy];
            auto it=pos[fx][fy];
            fx=it.first;
            fy=it.second;
        }
        cout<<ans.size()<<endl;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;

    }
 
}
