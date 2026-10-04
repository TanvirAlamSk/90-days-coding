#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n;
	string s;
	cin>>n>>s;
	vector<int>vt(26);
	
	for(i=0;i<n;i++){
		vt[s[i]-'a']++;
	}
	
	for(i=0;i<26;i++){
		if(vt[i]%2==1){
			cout<<"NO\n";
			return;
		}
	}
	
	cout<<"YES\n";
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



