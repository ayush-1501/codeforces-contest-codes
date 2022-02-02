#include<bits/stdc++.h>
using namespace std;

vector<bool>prime(int k){
    vector<bool>is_prime(k+1,true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=k;i++){
      if(is_prime[i] and (long long)i*i<=k){
          for(int j=i*i;j<=k;j+=i){
              is_prime[j]=false;
          }
      }
    }
    return is_prime;
}

signed main(){
    int n;
    cin>>n;
    int out;
    int k=n*n;
    vector<bool>ans=prime(k);
    for(int i=0;i<INT_MAX;i++){
        if(ans[i]==true){
            n--;
        }
        if(n==0){
           out=i;break; 
        }
    }
    cout<<out;
    return 0;
}