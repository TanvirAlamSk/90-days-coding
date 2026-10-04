#include<bits/stdc++.h>
using namespace std;

const int mx=100000+5;

void solve(){
	int i,n,sum=0,ui,ned;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		sum+=ui;
	}
	ned=(n*100+100)/2;
	if(ned<=sum){
		cout<<0<<endl;
	}else if(ned<=sum+100){
		cout<<ned-sum<<endl;
	}else{
		cout<<-1<<endl;
	}
	
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
}

