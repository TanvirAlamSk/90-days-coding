#include<bits/stdc++.h>
using namespace std;


void solve(){
	int i,n,ui,flag=1;
	
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		
		if(ui<5){
			flag=0;
		}
	}
	
	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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
	return 0;
}

