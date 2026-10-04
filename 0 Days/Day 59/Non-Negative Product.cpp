#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui,neg=0,flag=1;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui<0 && flag){
			neg++;
		}
		
		if(ui==0){
			neg=0;
			flag=0;
		}
	}
	
	if(neg%2==0){
		cout<<0<<endl;
	}else{
		cout<<1<<endl;;
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


