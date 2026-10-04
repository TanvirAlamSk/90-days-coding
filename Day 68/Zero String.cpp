#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	int i,n,cnt1=0,cnt0=0;
	cin>>n>>s;
	
	for(i=0;i<n;i++){
		if(s[i]=='1'){
			cnt1++;
		}else{
			cnt0++;
		}
	}
	
	if(cnt1==n){
		cout<<1<<endl;
	}else if(cnt1>cnt0){
		cout<<cnt0+1<<endl;
	}else{
		cout<<cnt1<<endl;
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


