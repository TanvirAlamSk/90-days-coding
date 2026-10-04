#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y,x1,y1,d,mn;	
	cin>>x>>y>>x1>>y1>>d;
	
	mn=min(x/x1,y/y1);
	
	if(mn<d){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
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



