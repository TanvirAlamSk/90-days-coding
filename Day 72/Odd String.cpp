#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,f=1;
	string s;
	cin>>n>>s;
	map<char,int>mp;

	for(i=0;i<n;i++){
		mp[s[i]]++;
		if(mp[s[i]]>2){
			f=0;
			break;
		}
	}
	
	if(f){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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

