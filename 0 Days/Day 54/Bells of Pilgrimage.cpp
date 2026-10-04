#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,x,k,p;
    cin>>n>>x>>k>>p;

    long long mana=p;

    if(k<=x) {
        mana+=k*10;
    } else {
        mana+=x*10;
        mana+=(k-x)*5;
    }

    if (k==n) {
        mana+=20;
    }

    cout << mana << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T=1;
	cin>>T;
	
	while(T--){
		solve();
	}
	return 0;
}




