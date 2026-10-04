#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,m,l0=0,l1=0;
	string s;
	cin>>n>>m>>s;
	
	for(i=0;i<m;i++){
		if(s[i]=='0'){
			l0++;
		}else{
			l1++;
		}
	}
	
	if(n%2==0 && abs(l0-l1)<=n-m){
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
}

