#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,a=0,ui;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui%2==1){
			a++;
		}
	}
	
	if(a%2==0){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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
