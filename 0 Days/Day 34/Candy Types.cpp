#include<bits/stdc++.h>
using namespace std;

void solve() {
	int i,n,ui,ans,cnt=0;
    cin>>n;
    vector<int>vt(n+1);
    
    for(i=0;i<n;i++){
		cin>>ui;
		vt[ui]++;
	}
	
	ans=vt[1];
	for(i=1;i<=n;i++){
		if(cnt<vt[i]){
			ans=i;
			cnt=vt[i];
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
	return 0;
}






