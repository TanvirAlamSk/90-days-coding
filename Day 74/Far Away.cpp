#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,x,s,l,r;
	cin>>n>>x>>s;
	
	for(i=0;i<s;i++){
		cin>>l>>r;
		
		if(l==x){
			x=r;
		}else if(r==x){
			x=l;
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
	
	return 0;
}



