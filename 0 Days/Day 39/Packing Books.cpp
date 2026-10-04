#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y,z;
	
	cin>>x>>y>>z;
	
	cout<<x*((y+z-1)/z)<<endl;
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
