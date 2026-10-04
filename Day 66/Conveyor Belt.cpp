#include<bits/stdc++.h>
using  namespace std;

void solve(){
	int i,n,p,l=0,r=0;
	cin>>n>>p;
	string s;
	cin>>s;
	
	for(i=0;i<p;i++){
		if(s[i]=='R'){
			r++;
		}
	}
	
	for(i=p-1;i<n;i++){
		if(s[i]=='L'){
			l++;
		}
	}
	
	cout<<min(l,r)<<endl;
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


