#include<bits/stdc++.h>
using namespace std;
bool countn(string s){
	int c=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='N')
			c++;
		if(c==2)
			return true;
	}
	if(c==1)
	return false;
else
return true;
}

void solve(){
string a;
cin>>a;
if(countn(a))
cout<<"YES\n";
else
cout<<"NO\n";
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	#ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}