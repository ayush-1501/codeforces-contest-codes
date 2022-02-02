#include<bits/stdc++.h>
using namespace std;

void problem(){
   string s;
   cin>>s;
   if(s.size()==1){cout<<"NO\n";return;}
   int k=s.size();
   int l=s.size()/2;
   //cout<<l<<"  ";
   //if(l%2!=0){cout<<"NO\n";return;}
   bool ans=true;
   for(int i=0;i<l;i++){
      if(s[i]!=s[l+i]){
          ans=false;
      }
   }
    if(k%2!=0 and ans){cout<<"NO\n";return;}
   else if(ans){cout<<"YES\n";}
   else cout<<"NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;cin>>t;
     while(t--)problem();
     return 0;
}