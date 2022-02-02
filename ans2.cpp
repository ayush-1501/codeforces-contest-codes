#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t,p,k,l;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        if((b-a)==(c-b)or((a==b)and(b==c)))
        {cout<<"YES"<<"\n";}
        
        else if((2*b-c)%a==0 and 2*b-c>0)
        {cout<<"YES"<<"\n";}
        
        else if((2*b-a)%c==0 and 2*b-a>0)
        {cout<<"YES"<<"\n";}
        
        else if((c+a)%(2*b)==0)
        {cout<<"YES"<<"\n";}
        
        else cout<<"NO"<<"\n";
      
       
       
    }
    return 0;
}
