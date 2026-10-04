#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n;
	string s;
	cin>>n;
	vector<pair<int,int>>vt(n);
	for(i=0;i<n;i++){
		vt[i]={-1*gcd(i+1,n),i+1};
	}
	
	sort(vt.begin(),vt.end());
	
	for(auto it:vt){
		cout<<it.second<<" ";
	}
	cout<<endl;
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


