#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,sum;
	cin>>a>>b;
	
	sum=a+b;
	
	if(sum<3){
		cout<<1;
	}else if(sum<11){
		cout<<2;
	}else if(sum<61){
		cout<<3;
	}else{
		cout<<4;
	}
	cout<<endl;
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




