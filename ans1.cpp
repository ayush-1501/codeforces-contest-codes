#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,p,k,l;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {cin>>p;ans.push_back(p);}
    
       int k=*min_element(ans.begin(), ans.end());
       int l=*max_element(ans.begin(), ans.end());
        
        cout<<l-k<<"\n";
       
    }
    return 0;
}
