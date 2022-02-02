#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void problem(){
    int n;cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<n-2;i++)
    {string ans;cin>>ans;
      if(s[s.length()-1]==ans[0])
       {s+=ans[1];}
      else s+=ans;
    }
     if(s.length()<n) s+='b';
      cout<<s<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;cin>>t;
     //freopen("input.txt", "r", stdin);
	 //freopen("output.txt", "w", stdout);
	#ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
     while(t--){problem();}
     return 0;
}