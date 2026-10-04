#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,a,b,x=1000;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>a>>b;
		if(x>b){
			x=b;
		}else if(a>x){
			x=a;
		}
	}
	
	cout<<x<<endl;
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
