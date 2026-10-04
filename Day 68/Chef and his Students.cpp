#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,ans=0;
	string s;
	cin>>s;
	
	for(i=1;s[i]!='\0';i++){
		if(s[i-1]=='<' && s[i]=='>'){
			ans++;
		}
	}
	
	cout<<ans<<endl;
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




