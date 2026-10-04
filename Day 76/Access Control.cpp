#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,x,cnt=0;
	string s;
	cin>>n>>x>>s;
	
	for(i=0;i<n;i++){
		if(s[i]=='0'){
			if(cnt>0){
				cnt--;
			}else{
				cout<<"NO\n";
				return;
			}
		}else{
			cnt=x;
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
	return 0;
}
