#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,j,n,k;
	cin>>n>>k;
	vector<int>vt(n);
	for(i=0;i<n;i++){
		cin>>vt[i];
	}
	
	i=0,j=n-1;
	while(i<=j){
		if(vt[i]==vt[j]){
			i++,j--;
		}else{
			if(vt[i]==k){
				i++;
			}else if(vt[j]==k){
				j--;
			}else{
				cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
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



