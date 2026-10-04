#include<bits/stdc++.h>
using namespace std;

void solve(){
	float m,h,res;
	cin>>m>>h;
	
	res=m/(h*h);
	
	if(res<=18){
		cout<<1;
	}else if(res<=24){
		cout<<2;
	}else if(res<=29){
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
	
	return 0;
}

