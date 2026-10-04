#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,m,lf;
	
	cin>>n>>m;
	
	lf=max(0,n-m);
	
	cout<<n+lf<<endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
	return 0;
}

