#include<bits/stdc++.h>
using namespace std;


void solve(){
	int x,y;
	cin>>x>>y;
	
	cout<<min(20,x/y)<<endl;
	
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


