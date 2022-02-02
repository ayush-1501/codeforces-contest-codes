#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int k=s.size();
          map<char,int>mp;
        for(int i=0;i<k;i++){
             mp[s[i]]++;
        }
        if(k==2 and s[0]!=s[1]){
            cout<<"NO\n";continue;
        }
        
        else if(s.find("ENE")<s.size() and mp['N']==1){
           cout<<"NO\n";continue;
        }
        else cout<<"YES\n";
    }
    return 0;
}