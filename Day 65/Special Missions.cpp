#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,c,s0=0,s1=0,ln;
	string s;
	cin>>n>>c;
	
	vector<int>vt(n);
	
	for(i=0;i<n;i++){
		cin>>vt[i];
	}
	
	cin>>s;
	ln=s.length();
	for(i=0;i<ln;i++){
		if(s[i]=='0'){
			s0+=vt[i];
		}else{
			s1+=vt[i];
		}
	}
	
	if(s1>c && s0>=c){
		cout<<s0-c+s1<<endl;
	}else{
		cout<<s0<<endl;
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
}
