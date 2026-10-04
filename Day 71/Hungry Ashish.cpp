#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y,z;
	cin>>x>>y>>z;
	
	if(x>=y){
		cout<<"PIZZA\n";
	}else if(x>=z){
		cout<<"BURGER\n";
	}else{
		cout<<"NOTHING\n";
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
	
	return 0;
}





