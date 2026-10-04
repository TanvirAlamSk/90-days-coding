#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,b,w,h,p,ans=0;
	cin>>n>>b;
	
	for(i=0;i<n;i++){
		cin>>w>>h>>p;
		if(p<=b){
			ans=max(ans,w*h);
		}
	}
	if(!ans){
		cout<<"no tablet\n";
		return ;
	}
	cout<<ans<<endl;
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
