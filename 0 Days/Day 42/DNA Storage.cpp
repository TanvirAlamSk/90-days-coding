#include<bits/stdc++.h>
using namespace std;

const int mx=100000+5;

void solve(){
	int i,n;
	string st,ans;
	cin>>n>>st;
	
	for(i=0;i<n;i+=2){
		if(st[i]=='0' && st[i+1] =='0'){
			ans.push_back('A');
		}else if(st[i]=='0' && st[i+1] =='1'){
			ans.push_back('T');
		}else if(st[i]=='1' && st[i+1] =='0'){
			ans.push_back('C');
		}else if(st[i]=='1' && st[i+1] =='1'){
			ans.push_back('G');
		}
	}
	cout<<ans<<endl;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
}




