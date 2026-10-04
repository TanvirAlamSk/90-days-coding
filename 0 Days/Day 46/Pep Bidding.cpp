#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,n,aa=0,ad=0,pa=0,pd=0,ui;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>ui;
		aa+=ui;
	}
	
	for(i=0;i<n;i++){
		cin>>ui;
		ad+=ui;
	}
	
	for(i=0;i<n;i++){
		cin>>ui;
		pa+=ui;
	}
	
	for(i=0;i<n;i++){
		cin>>ui;
		pd+=ui;
	}
	
	if(aa>pa && ad>pd){
		cout<<"A";
	}else if(aa<pa && ad<pd){
		cout<<"P";
	}else{
		cout<<"DRAW";
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

