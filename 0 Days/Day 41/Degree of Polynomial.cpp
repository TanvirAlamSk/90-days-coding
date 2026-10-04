#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,n,p=0,ui;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if(ui){
			p=i;
		}
	}
	
	cout<<p<<endl;
	
	
	return 0;
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




