#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if((a==b&&c%2==0)||(b==c&&a%2==0)||(a==c&&b%2==0)||a+b==c||a+c==b||b+c==a)
			puts("YES");
		else
			puts("NO");
	}
} 