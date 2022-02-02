#include<bits/stdc++.h>
using namespace std;

vector<int> d_to_b(long long num,long long l){
    
    vector<int>binary;
     
     while(num)
     {
         binary.push_back(num%2);
         num/=2;
     }

     int left=l-binary.size();
     while(left--) binary.push_back(0);

     reverse(binary.begin(),binary.end());
     return binary;
}

int32_t main(void)
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;cin>>t;
    while(t--)
    {
        int n,l;cin>>n>>l;
        vector<int>arr(n,0);

        vector<int>final_sum(l,0);
        vector<int>temp;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            temp=d_to_b(arr[i],l);
            for(int j=0;j<temp.size();j++)
            {final_sum[j]+=temp[j];}
        }

        vector<int>ans(l,0);
        for(int i=0;i<l;i++)
        {
            if(final_sum[i]>n/2)
            {ans[i]=1;}
        }

        reverse(ans.begin(),ans.end());
        int finalans=0;
        int pow2=1;

        for(int i=0;i<l;i++)
        {
            finalans+=(pow2*ans[i]);
            pow2*=2;
        }

        cout<<finalans<<"\n";
    }
    return 0;
}