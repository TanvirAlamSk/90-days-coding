#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,od=0,ev=0;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui%2==0){
			ev++;
		}else{
			od++;
		}
	}
	
	if(od%2==0){
		cout<<min(od/2,ev)<<endl;
	}else{
		cout<<ev<<endl;
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
}
