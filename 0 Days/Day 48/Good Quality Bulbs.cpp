#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,x,ui,sum=0;
	cin>>n>>x;
	
	for(i=0;i<n-1;i++){
		cin>>ui;
		sum+=ui;
	}
	
	cout<<max(0,n*x-sum)<<endl;
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


