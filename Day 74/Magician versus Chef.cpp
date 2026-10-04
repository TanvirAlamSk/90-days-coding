#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,m,ui;
	long long sum=0;
	cin>>n>>m;
	
	for(i=0;i<n;i++){
		cin>>ui;
		sum+=max(ui-1,m-ui);
	}
	cout<<sum<<endl;
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


