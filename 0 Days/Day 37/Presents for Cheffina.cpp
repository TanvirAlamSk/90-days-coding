#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    long long ans = (n / 5) * 4 + (n % 5);
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
