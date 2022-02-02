#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
    int hc,dc;cin>>hc>>dc;
    int hm,dm;cin>>hm>>dm;
    int k,w,a;cin>>k>>w>>a;
    bool ans=true;int count=0;
    while(1){
        count++;
       // if(hc<hm and k!=0){hc+=w;k--;}
         if(hc<hm and k!=0){dc+=a;k--;}
         if(hc<hm and k!=0){hc+=w;k--;}
        hm-=dc;
        if(hm<0){break;}
        hc-=dm;
        if(hc<0){ans=false;break;}
    }
    cout<<count<<" ";
     if(ans)cout<<"char wins";
     else cout<<"monster wins";
  
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