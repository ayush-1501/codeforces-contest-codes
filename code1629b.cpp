#include<bits/stdc++.h>
using namespace std;

int countOdd(int l, int r){
 
    int n = (r - l) / 2;
 
    
    if (r % 2 != 0 || l % 2 != 0)
        n += 1;
 
    return n;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        int l,r,k;
        cin>>l>>r>>k;
        
        int count=0;
        if(l==1 and r==1){cout<<"NO\n";continue;}
        if(l==r){cout<<"YES\n";continue;}
        
        count=countOdd(l,r);
        
         
        if(count<=k){cout<<"YES\n";}
         else cout<<"NO\n";
    }

}       