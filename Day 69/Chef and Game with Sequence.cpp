#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,odd=0;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		
		if(ui%2==1){
			odd++;
		}
	}
	
	if(n>1 && odd%2==1){
		cout<<2<<"\n";
	}else{
		cout<<1<<"\n";
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
