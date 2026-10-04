#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,x,ui,sum=0;
	cin>>n>>x;

	for(int i=0;i<n;i++){
		cin>>ui;
		sum+=ui;
	}
	cout<<(sum+x-1)/x<<endl;
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



