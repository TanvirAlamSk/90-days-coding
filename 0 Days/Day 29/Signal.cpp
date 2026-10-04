#include<bits/stdc++.h>
using namespace std;


void solve(){
	int i,n,flag=0,ans=0;
	string st;
	
	cin>>n>>st;
	
	for(i=0;i<n;i++){
		if(st[i]=='0'){
			flag=1;
		}
		if(flag && st[i]=='1'){
			ans++;
		}
	}
	
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
	
	return 0;
}




