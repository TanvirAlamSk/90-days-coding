#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,r=0,s=0,ui;
	
	for(i=0;i<7;i++){
		cin>>ui;
		if(ui==1){
			s++;
		}else{
			r++;
		}
	}
	
	if(s>r){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	cout<<endl;
	
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
