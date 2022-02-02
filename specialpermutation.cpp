#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
  int n,a,b;
  cin>>n>>a>>b;
 
  int l=n-b,r=a-1;
  if(l>n/2 or r>n/2){
     cout<<-1;return;
  }

  vector<int>ans(n);
  int idx=0;
  for(int i=b+1;i<=n;i++)ans[idx++]=i;
  for(int i=1;i<a;i++)ans[n-i]=i;
  for(int i=a;i<=b;i++)ans[idx++]=i;

  int min=INT_MAX,max=-1;
                    
  for(int i=0;i<n/2;i++) min=std::min(min,ans[i]);
  for(int i=n/2;i<n;i++) max=std::max(max,ans[i]);

  if(min!=a or max!=b){
      cout<<-1;return;
  }
  for(auto i:ans){cout<<i<<" ";}
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