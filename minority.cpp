#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// vector<int>prefix(string &s,char k){
//     vector<int>ans(s.length(),0)
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='k'){
//          ans[i]=ans[i-1]++;
//     }
// }
void problem(void){
    string s;cin>>s;
    int zero=0,one=0;
    if(s.size()==2){cout<<0;return;}
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')one++;
        else zero++;
    }
    // cout<<one<<zero;
     if(one>zero)cout<<zero;
     else if(one==zero)cout<<zero-1;
     else if(one==s.size() or zero==s.size())cout<<0;
     else cout<<one; 
  
}

int32_t main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;cin>>t;
      #ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
      #endif
     #ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
     while(t--){problem();cout<<"\n";}
     return 0;
}