#include <bits/stdc++.h>
using namespace std;

void solve(){
	double n,x,y,a,b;
	
	cin>>n>>x>>y>>a>>b;
	
	if(n/a*x>n/b*y){
		cout<<"DIESEL";
	}else if(n/a*x<n/b*y){
		cout<<"PETROL";
	}else{
		cout<<"ANY";
	}
	cout<<endl;
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
	
	return 0;
}




