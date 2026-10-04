#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ans;
	cin>>n;
	vector<int>vt(n),temp;
	
	for(i=0;i<n;i++){
		cin>>vt[i];
		temp.push_back(vt[i]);
	}
	
	sort(temp.begin(),temp.end());
	ans=temp[0]+temp[1];
	
	for(i=0;i<n-1;i++){
		ans=min(ans,vt[i]+vt[i+1]/2);
	}
	
	cout<<ans<<"\n";
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
