#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,i,cnt=0;
	string s;
	cin>>n>>s;
	
	for(i=0;i<n;i++){
		if(s[i]=='1'){
			cnt++;
		}else{
			if(cnt>0 && cnt<3){
				cout<<"No\n";
				return;
			}
			cnt=0;
			
		}
	}
	if(cnt>0 && cnt<3){
		cout<<"No\n";
		return;
	}
	cout<<"Yes\n";
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






