#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,sum=0;
	string s1,s2;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		sum+=ui;
	}
	
	if(sum%2==1){
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


