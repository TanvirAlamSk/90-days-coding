#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y;
	cin>>x>>y;
	
	if(y>=x){
		cout<<y-x<<endl;
	}else if((x-y)%2==0){
		cout<<(x-y)/2<<endl;
	}else{
		cout<<(x-y)/2+2<<endl;
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



