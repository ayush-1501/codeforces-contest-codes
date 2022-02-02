#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cal(int n){
    int count=0;
    while(n){
        n/=10;count++;
    }
    return count;
}
void problem(void){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int num1=cal(a),num2=cal(c);
 // cout<<num1<<" "<<num2;
  if(num1+b>num2+d)cout<<">";
  else if(num1+b<num2+d)cout<<"<";
  else{
      bool answer1=false,answer2=false;
      int k=a,l=c,o=cal(a),y=cal(c);
      while(o and y ){
          if(k/pow(10,o--)>c/pow(10,y--)){
              answer1=true;break;
          }
      }
        k=a,l=c,o=cal(a),y=cal(c);
       while(o and y ){
          if(k/pow(10,o--)<c/pow(10,y--)){
              answer2=true;break;
          }
      }
      if(answer1)cout<<">";
      else if(answer2) cout<<"<";
      else cout<<"=";
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