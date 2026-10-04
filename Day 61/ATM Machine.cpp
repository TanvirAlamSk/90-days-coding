#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,j,n,k;
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>j;
		if(k>=j){
			k-=j;
			cout<<1;
		}else{
			cout<<0;
		}
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
	return 0;
}



