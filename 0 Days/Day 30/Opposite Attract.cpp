#include<bits/stdc++.h>
using namespace std;


void solve(){
	int i,n;
	string s;
	cin>>n>>s;
	
	for(i=0;i<n;i++){
		if(s[i]=='0'){
			s[i]='1';
		}else{
			s[i]='0';
		}
	}
	
	cout<<s<<endl;
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




