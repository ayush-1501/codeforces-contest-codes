#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        if(s.size()<10)
        {cout<<s<<"\n";continue;}

         int k=s.size()-2;
        cout<<s[0]<<k<<s[s.size()-1]<<"\n";

    }
    return 0;
}
