#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



void problem(void){
  int n,k;cin>>n;
  vector<int>a;
  if(n==1){cin>>k;cout<<k;return;}
  for(int i=0;i<n;i++){
      cin>>k;a.push_back(k); 
    }
     ll count=0;
    for(int i=0;i<n;i++){
      if(a[i]%2==0){
        while(a[i]!=1){
            count++;
            a[i]=a[i]/2;
            if(a[i]%2!=0)break;
        }
      } 
    }
  
    sort(a.begin(),a.end());
    ll sum=0;
    for(int i=0;i<n-1;i++){
       sum+=a[i];
    }
    ll f=a[n-1];
    //cout<<f;
    for(int i=0;i<count;i++){
        f*=2;
    }
    ll finalans=sum+f;
    cout<<finalans;
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