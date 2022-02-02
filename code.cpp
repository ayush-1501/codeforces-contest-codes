#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {cin>>ans[i];}
        //sort(ans.begin(),ans.end());
        int k=*min_element(ans.begin(), ans.end());
        int l=*max_element(ans.begin(), ans.end());
        cout<<l-k<<"\n";
    }
    return 0;
}