#include<bits/stdc++.h>
using namespace std;

void solve(){
	int h,x,y,c;
	cin>>h>>x>>y>>c;
	
	if(h*(x+y/2)<=c){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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



