#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,t,n,s,ans=0;
	cin>>t>>n>>s;
	i=min(t,(s+n-1)/n);
	while(i--){
		if(s>=n){
			ans+=(n*n);
			s-=n;
		}else{
			ans+=(s*s);
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
	return 0;
}




