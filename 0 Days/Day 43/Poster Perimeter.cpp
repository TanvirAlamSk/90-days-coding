#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,m,k,mn,ans=1000000;
	cin>>n>>m>>k;
	
	mn=2*(n+m);
	
	for(i=4;i<=mn;i+=2){
		ans=min(ans,abs(i-k));
		if(i>k){
			break;
		}
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
}

