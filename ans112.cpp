#include <iostream>
using namespace std;

int a[1000000+5], b[1000000+5];

int32_t main() {
    int n,k,l;
    cin>>n>>k>>l;
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    for (int i=0; i<n; i++) {
        cin>>b[i];
    }
    int64_t ans=0;
    for (int i=0; i<n; i++) {
        ans+=(a[i]-l)*b[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i] < b[j]) ans++;
        }
    }
    if (l > 0) {
        ans += n + k * l + 2;
    }
    cout<<ans/2;
    return 0;
}