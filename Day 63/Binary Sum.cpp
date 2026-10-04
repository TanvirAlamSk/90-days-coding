#include<bits/stdc++.h>
using namespace std;

void solve(){
	int r,n,k;
	cin>>n>>k;
	r=n/2;
	
	if(r==k || n-r==k){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	
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

