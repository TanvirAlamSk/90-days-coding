#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,ans=0;
	string st="ADVITIYA",st2;
	cin>>st2;
	
	for(i=0;i<8;i++){
		if(st[i]!=st2[i]){
			if(st[i]<st2[i]){
				ans+=('Z'-st2[i])+(st[i]-'A')+1;
			}else{
				ans+=abs(st[i]-st2[i]);
			}
		}
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
	
	return 0;
}
