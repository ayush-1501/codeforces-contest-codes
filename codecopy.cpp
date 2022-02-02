#pragma GCC optimize("O3")

#include<bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long
#define pb push_back
#define ld long double
#define f first
#define s second

using namespace std;

        

mt19937 gen(time(0));

const ll MOD = 1e9 + 7;

int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else


#endif // LOCAL


    ll t;
    cin >> t;
    while(t--) {
        string s, s2;
        ll x, x2;
        cin >> s >> x >> s2 >> x2;
        if(s.size() + x < s2.size() + x2) cout << "<\n";
        if(s.size() + x > s2.size() + x2) cout << ">\n";
        if(s.size() + x == s2.size() + x2) {
            while(s.size() < s2.size()) s.pb('0');
            while(s.size() > s2.size()) s2.pb('0');
            if(s < s2) cout << "<\n";
            if(s > s2) cout << ">\n";
            if(s == s2) cout << "=\n";


        }

    }
}
 