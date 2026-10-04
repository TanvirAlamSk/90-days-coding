#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	cin>>a>>b;
	
	if(a>0 && b>0){
		cout<<"Solution";
	}else if(b==0){
		cout<<"Solid";
	}else{
		cout<<"Liquid";
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


