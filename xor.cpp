#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int xor1(int a,int b){return a^b;}


int pow2(int n){
    int count=0;
    while(n){
        n/=2;
        count++;
    }
    return count-1;
}
void problem(void){
  int n;cin>>n;
  if(n==1){cout<<1;return;}
  if(pow(2,pow2(n))!=n){
   for(int i=1;i<pow(2,pow2(n));i++){
      cout<<i<<" ";
   }
   cout<<0<<" ";
   for(int i=pow(2,pow2(n));i<n;i++){
      cout<<i<<" ";
   }
  }
  else{
      for(int i=1;i<pow(2,pow2(n)-1);i++){
      cout<<i<<" ";
   }
   cout<<0<<" ";
    for(int i=pow(2,pow2(n)-1);i<n;i++){
      cout<<i<<" ";
   }
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