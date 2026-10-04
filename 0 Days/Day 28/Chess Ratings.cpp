#include<bits/stdc++.h>
using namespace std;


void solve(){
	int x,y;
	cin>>x>>y;

	if(x+2*y<=50 && x+2*(y+5)>=50){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
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



