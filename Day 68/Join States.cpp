#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,m,ui,sum=0,state=0;
	cin>>n>>m;
	
	for(i=0;i<n;i++){
		cin>>ui;
		sum+=ui;
		if(sum>=m){
			state++;
			sum=0;
		}
	}
	
	cout<<state<<endl;
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



