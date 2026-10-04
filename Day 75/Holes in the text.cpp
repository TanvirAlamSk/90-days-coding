#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,len,ans=0;
	string s;
	cin>>s;
	len=s.length();
	map<char,int>mp;
	
	mp['A']=1;
	mp['B']=2;
	mp['D']=1;
	mp['O']=1;
	mp['P']=1;
	mp['Q']=1;
	mp['R']=1;
	
	for(i=0;i<len;i++){
		ans+=mp[s[i]];
	}
	cout<<ans<<endl;
	
	return;
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

