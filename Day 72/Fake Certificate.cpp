#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> using ordered_set= tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define testcase int T; cin>>T; for (int tc = 1; tc <= T; tc++)
#define SETPRECISION cout<<fixed<<setprecision(5)

using ll=long long;

const double PI=acos(-1.0);

ll ceil(ll x, ll y) {
    ll res=(x+y-1)/y;
    return res;
}

const int mx=1e7+5;
const int mod=1e9+7;

int solve() {
    int i,n,c0=0,c1=0,ans=0;
    string s;
    cin>>n>>s;
    
    for(i=0;i<n;i++){
		if(s[i]=='1'){
			c1++;
			ans=max(ans,c0);
			c0=0;
		}else{
			c0++;
		}
	}
	
	ans=max(ans,c0);
    
    cout<<ans+c1<<endl;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    testcase{
        solve();
    }

    return 0;
}

