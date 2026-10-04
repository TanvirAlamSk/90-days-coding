#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,cnt=0;
	string s;
	cin>>n>>s;
	
	for(i=0;i<n;i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			cnt=0;
		}else{
			cnt++;
		}
		
		if(cnt>3){
			break;
		}
	}
	
	if(cnt>3){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
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
