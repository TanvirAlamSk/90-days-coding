#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,sf=0,ss=0;
	string s1,s2;
	cin>>n>>s1>>s2;
	
	for(i=0;i<n;i++){
		if(s1[i]=='0'){
			sf++;
		}
	}
	
	for(i=0;i<n;i++){
		if(s2[i]=='0'){
			ss++;
		}
	}
	
	if(sf==ss){
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

