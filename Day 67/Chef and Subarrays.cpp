#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,j,n;
	long long ans=0,sum,pod;
	cin>>n;
	vector<int>vt(n);
	for(i=0;i<n;i++){
		cin>>vt[i];
	}
	
	for(i=0;i<n;i++){
		sum=0,pod=1;
		for(j=i;j<n;j++){
			sum+=vt[j];
			pod*=vt[j];
			
			if(sum==pod){
				ans++;
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
}




