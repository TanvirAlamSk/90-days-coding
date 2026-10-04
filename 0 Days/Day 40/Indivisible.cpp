#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c,d=2;
	cin>>a>>b>>c;
	
	while(a%d==0 || b%d==0 || c%d==0 ){
		d++;
	}
	
	cout<<d<<endl;
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




