#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,ans;
	cin>>n;
	ans=n/2*12+n/2;
	if(n%2==1){
		ans+=6;
	}
	cout<<ans<<endl;
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

