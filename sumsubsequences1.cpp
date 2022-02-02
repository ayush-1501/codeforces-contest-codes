#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c,d,e,f,a2,a3;
	cin>>a>>b>>c>>d>>e>>f;
	if((a+b)==c||a==b||b==c)
		{a2=b;}
	else 
		{a2=b-a;}
	a3=f-a-a2;
	cout<<a<<" "<<a2<<" "<<a3<<"\n";

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