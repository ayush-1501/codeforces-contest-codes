#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>arr;
        vector<int>ai,bi;
        for(int i=0;i<n;i++){
            int l;cin>>l;
          ai.push_back(l);
        }
        for(int i=0;i<n;i++){
            int l;cin>>l;
          bi.push_back(l);
        }

        for(int i=0;i<n;i++){
            arr.push_back({ai[i],bi[i]});
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i].first<=k)
            {k=k+arr[i].second;}
            else break;
        }
        cout<<k<<"\n";
    }
    return 0;
}