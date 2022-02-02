#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
    int n;cin>>n;
    vector<int>a,b;
    int p;
    for(int i=0;i<n;i++){
        cin>>p;a.push_back(p);
    }
    for(int i=0;i<n;i++){
        cin>>p;b.push_back(p);
    }
    for(int i=0;i<n;i++){
        if(a[i]<b[i]){
            swap(a[i],b[i]);
        }
    }
    int amax=*max_element(a.begin(),a.end());
    int bmax=*max_element(b.begin(),b.end());
    cout<<amax*bmax;
    
  
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