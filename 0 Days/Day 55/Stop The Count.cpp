#include<bits/stdc++.h>
using namespace std;

void solve(){
	int cnt0=0,cnt1=0,len,i,ans=0;
	string st;
	cin>>len>>st;
	
	for(i=0;i<len;i++){
		if(st[i]=='1'){
			cnt1++;
		}else{
			cnt0++;
		}
		
		if(cnt1>cnt0){
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
	return 0;
}




