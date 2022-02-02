#include<bits/stdc++.h>
using namespace std;

int32_t main(void){
 
  int t;cin>>t;
  while(t--)
  {
      int n,m,rb,cb,rd,cd;
      cin>>n>>m>>rb>>cb>>rd>>cd;
      int count=0,inc_x=1,inc_y=1;
      while(rb!=rd and cb!=cd){
          if(rb+inc_x>n or rb+inc_x<1)inc_x=-inc_x;
          if(cb+inc_y>m or cb+inc_y<1)inc_y=-inc_y;
          rb+=inc_x;
          cb+=inc_y;
          count++;
      }
      cout<<count<<"\n";
  }

}
