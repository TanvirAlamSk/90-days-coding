#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,od=0,ui;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		
		if(ui%2==1){
			od++;
		}
	}
	
	if(od==1){
		cout<<"Yes\n";
	}else{
		cout<<"No\n";
	}
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

