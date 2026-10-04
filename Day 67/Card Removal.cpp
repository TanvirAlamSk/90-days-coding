#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,cnt=1,ans=0;
	cin>>n;
	vector<int>vt(n);
	for(i=0;i<n;i++){
		cin>>vt[i];
	}
	sort(vt.begin(),vt.end());
	
	for(i=1;i<n;i++){
		if(vt[i]!=vt[i-1]){
			ans=max(ans,cnt);
			cnt=1;
		}else{
			cnt++;
		}
	}
	ans=max(ans,cnt);
	cout<<n-ans<<endl;
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

