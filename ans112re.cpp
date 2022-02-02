#include <bits/stdc++.h>
using namespace std;

vector<int>a,b;

int32_t main() {
    int n,k,l,in;
    cin>>n>>l>>k;
    for (int i=0; i<n; i++) {
        cin>>in;
        a.push_back(in);
    }
    for (int i=0; i<n; i++) {
        cin>>in;
        b.push_back(in);
    }

   vector<int>ans;
   for(int i=0;i<n;i++)
   {
       ans[i]=a[i]*b[i];
   }

   sort(ans.begin(),ans.end());
   int answer=0;
   for(int i=0;i<n-k;i++)
   {
      answer+=ans[i];
   }
   cout<<answer<<"\n";
   return 0;

}  