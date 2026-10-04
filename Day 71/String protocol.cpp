#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i=0,n,cnt=0,ans=0;
	char c;
	string s;
	cin>>n>>s;
	
	while(i<n){
		c=s[i];
		while(c==s[i] && i<n){
			cnt++;
			i++;
		}
		ans+=(cnt+1)/2;
		cnt=0;
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
	
	return 0;
}



