#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c,mn;
	cin>>a>>b>>c;
	
	mn=min(a,min(b,c));
	
	if(a==mn){
		cout<<"Draw";
	}else if(b==mn){
		cout<<"Bob";
	}else{
		cout<<"Alice";
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
