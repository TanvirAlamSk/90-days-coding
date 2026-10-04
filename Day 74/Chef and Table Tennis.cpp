#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,len,c0=0,c1=0;
	string s;
	cin>>s;
	len=s.length();
	
	for(i=0;i<len;i++){
		if(s[i]=='0'){
			c0++;
		}else{
			c1++;
		}
		
		if(c0-c1>=2 && c0>=11){
			cout<<"LOSE\n";
			break;
		}else if(c1-c0>=2 && c1>=11){
			cout<<"WIN\n";
			break;
		}
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
