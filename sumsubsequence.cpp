#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void problem(void){
   vector<int>a;
   int k;
   for(int i=0;i<7;i++){
       cin>>k;a.push_back(k);
   }
   sort(a.begin(),a.end());
   int sum3=a[6];
   vector<int>temp(3);
   for(int i=0;i<7;i++){
       for(int j=i+1;j<7;j++){
           int find=a[6]-a[i]-a[j];
           if(binary_search(a.begin()+j+1,a.end(),find)){
               temp[0]=a[i];temp[1]=a[j];temp[2]=find;
               cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<"\t";
           }
       }
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

// int n;
// vector<bool> is_prime(n+1, true);
// is_prime[0] = is_prime[1] = false;
// for (int i = 2; i * i <= n; i++) {
//     if (is_prime[i]) {
//         for (int j = i * i; j <= n; j += i)
//             is_prime[j] = false;
//     }
// }