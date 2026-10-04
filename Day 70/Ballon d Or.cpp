#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,cnt=0;
	cin>>n;
	
	for(i=1;i<=n;i++){
		cin>>ui;
		if(ui==2){
			cnt++;
		}
	}
	
	if(cnt%8==0){
		cout<<"YES\n"<<endl;
	}else{
		cout<<"NO\n"<<endl;
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



