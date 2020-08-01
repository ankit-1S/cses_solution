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
#define mat vector<array<ll int ,2>>
mat base(2);
mat mul(mat a, mat b){
    mat ans(2);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                ans[i][j]=( ans[i][j] + (a[i][k]*b[k][j])%MOD)%MOD;
            }    

        }
    }
    return ans;
}
mat power(mat a,ll unsigned b){
    mat ans(2);
    ans={{1,0},{0,1}};
    while(b){
        if(b%2)ans=mul(ans,a);
        a=mul(a,a);
        b=b/2;
    }
    return ans;
}

int main(){
    FAST
    ll unsigned int n;
    cin>> n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    base={{1,1},{1,0}};
    base =power(base,n-1);
    cout<<base[0][0]<<endl;

}