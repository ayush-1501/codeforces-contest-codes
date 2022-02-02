#include<bits/stdc++.h>
using namespace std;
int main()
{int tie;cin>>tie;
while(tie--)
{int n;cin>>n;
string s;
cin>>s;
for(int i=1;i<n-2;i++)
{string t;cin>>t;
if(s[s.length()-1]==t[0])
{s+=t[1];
}
else s+=t;
}
if(s.length()<n) s+='b';
cout<<s<<endl;
}
}