#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
    int n;cin>>n;
    if(n%2==0){
        cout<<n-3<<" "<<2<<" "<<1;
    }
    else{
        --n;
        int cur=n/2;
        if(cur%2==0){
            cout<<cur-1<<" "<<cur+1<<" "<<1;
        }
        else cout<<cur-2<<" "<<cur+2<<" "<<1;
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