#include<bits/stdc++.h>
using namespace std;

void solve() {
    int i,n,r=0,b=0,c=0,ui;
    cin >> n;
    
    for ( i = 0; i < n; i++) {
        cin >> ui;
        if (ui == 1) {
            r++;
        } else if (ui == 2) {
            b++;
        } else {
            c++;
        }
    }

    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    
    int target = n / 2;
    
    if (r <= target && b <= target) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
