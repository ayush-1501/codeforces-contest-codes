#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
  int n;cin>>n;
   vector<int>ans(n+1);
	    for(int i=0;i<n;++i)
	    cin>>ans[i];
	    ans[n]=0;
	    for(int i=n-1;i>=0;i--){
	       ans[i]=max(ans[i],ans[i+1]-1);  
	    }
	    for(int i=0;i<n;++i){
            if(ans[i]){
                cout<<1<<" ";
            }
            else cout<<0<<" ";
        }

}

int32_t main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     #ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
    int t;cin>>t;
     while(t--){problem();cout<<"\n";}
     return 0;
}

