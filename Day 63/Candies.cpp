#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,f=1,n,ui;
	cin>>n;
	n*=2;
	map<int,int>mp;
	for(i=0;i<n;i++){
		cin>>ui;
		mp[ui]++;
		if(mp[ui]==3){
			f=0;
		}
	}
	if(f){
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


