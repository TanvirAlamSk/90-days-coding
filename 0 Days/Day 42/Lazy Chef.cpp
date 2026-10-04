#include<bits/stdc++.h>
using namespace std;

const int mx=100000+5;

void solve(){
	int x,m,d,ans;
	cin>>x>>m>>d;
	ans=min(x*m,x+d);
	cout<<ans<<endl;
	
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
}



