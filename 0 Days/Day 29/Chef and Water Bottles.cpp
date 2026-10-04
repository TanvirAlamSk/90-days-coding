#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,x,k,m;
	
	cin>>n>>x>>k;
	
	m=k/x;
	
	cout<<min(m,n)<<endl;
	
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







