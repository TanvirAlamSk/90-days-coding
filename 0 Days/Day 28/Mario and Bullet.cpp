#include<bits/stdc++.h>
using namespace std;


void solve(){
	int tm,x,y,z;
	cin>>x>>y>>z;
	tm=y/x;
	cout<<max(0,z-tm)<<endl;
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


