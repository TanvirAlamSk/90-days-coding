#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	
	if(n==5 || n==1 || n==2){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
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
