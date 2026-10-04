#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	
	cin>>n;
	
	if(n%2==0 || n%7==0 || ((n-7)%2==0 && n-7>0)){
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



