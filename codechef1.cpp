#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
    int n,x;string s;
    cin>>n>>x>>s;
    int count=0;
    vector<pair<int,int>>a;
    for (int i=0;i<n-x+1;i++) {
        int zero=0,one=0;
        for (int j = 0; j < x; j++){
            if(s[j]=='0')zero++;
            else one++;
        }
        a.push_back({zero,one});
    }
    
     for(int i=0;i<a.size();i++){
         cout<<a[i].first<<" "<<a[i].second;
     }
 
  
}

int32_t main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;cin>>t;
     #ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
     while(t--){problem();cout<<"\n";}
     return 0;
}