#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
  int n;cin>>n;
  vector<int>cream;
  for(int i=0;i<n;i++){
      int t;cin>>t;cream.push_back(t);
  }

  vector<int>ans(n,0);
  
  for(int i=n-1;i>=0;i--){
     int t=cream[i];
     if(t>0){
      while(t!=0){
         ans[i]=1;i--;t--;
         if(i<0)break;
      }
     } 
  }


 for(int i=0;i<n;i++){
 cout<<ans[i]<<" ";
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

