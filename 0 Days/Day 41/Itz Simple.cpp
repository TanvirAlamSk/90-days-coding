#include<bits/stdc++.h>
using namespace std;

int solve(){
	int i,n,k,p,h=0,sum=0,ui;
	cin>>n>>k>>p;
	
	for(i=0;i<n;i++){
		cin>>ui;
		if(h<ui){
			h=ui;
		}
		sum+=ui;
	}
	
	sum-=h;
	
	if(h+k>sum+p){
		cout<<"Ved";
	}else if(h+k<sum+p){
		cout<<"Varun";
	}else{
		cout<<"Equal";
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


