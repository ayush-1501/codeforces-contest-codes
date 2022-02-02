#include<bits/stdc++.h>
using namespace std;

vector<int>ans;
void precompute()
{
    int k=1;
      for(int i=0;i<1000;i++)
      {
          if(k*k==i)
          {ans.push_back(i);k++;}
      }
}

int32_t main(void){
    ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
    int t;cin>>t;
    precompute();
    while(t--)
    {
        int n;cin>>n;
        int count=0,i=0;
        while(ans[i]<n)
        {
            count++;
        }
        cout<<count;
    }
}