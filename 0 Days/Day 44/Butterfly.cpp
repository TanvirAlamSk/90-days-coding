#include<bits/stdc++.h>
using namespace std;

void solve(){
	int r,g,b,mx=0;
	cin>>r>>g>>b;
	long long sum=r+g+b;
	
	mx=max(mx,r);
	mx=max(mx,g);
	mx=max(mx,b);
	sum-=mx;
	if(sum<mx){
		cout<<"NO";
	}else{
		cout<<"YES";
	}
	
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	while(T--){
		solve();
	}
}



