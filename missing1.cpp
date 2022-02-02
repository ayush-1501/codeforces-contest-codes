#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s,a="";
	int f=0,t=0,n;
	cin>>n;
	cin>>a;
	for(int i=1;i<n-2;i++){
    cin>>s;
    if(s[0]==a[a.size()-1])
    	a+=s[s.size()-1];
    else a+=s;
}
    if(a.size()==n)
    	cout<<a<<"\n";
    else{
    	a+="a";
    	cout<<a<<"\n";
    }
}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
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