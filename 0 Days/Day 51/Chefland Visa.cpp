#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x1,x2,y1,y2,z1,z2;
	
	cin>>x1>>x2>>y1>>y2>>z1>>z2;
	
	if(x1>x2 || y1>y2 || z1<z2){
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
