#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
  int n;cin>>n;
  if(n%7==0){
    cout<<n;
  }
  else{
      // if(n%10==0){
      //   int l=n%7;
      //   cout<<n+(7-l);
      // }
    
        if(n%10>n%7){
          cout<<n-n%7;
        }
        else cout<<n+(7-n%7);
      
  } 
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