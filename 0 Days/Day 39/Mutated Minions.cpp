#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,k,ui,ans=0;
	
	cin>>n>>k;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if((ui+k)%7==0){
			ans++;
		}
	}
	
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
	
	return 0;
}

