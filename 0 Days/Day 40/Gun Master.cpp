#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,d,ans=0,ui,sg=1;
	cin>>n>>d;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui>d && sg){
			sg=0;
			ans++;
		}else if(ui<=d && !sg){
			sg=1;
			ans++;
		}
	}
	
	cout<<ans<<"\n";
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

