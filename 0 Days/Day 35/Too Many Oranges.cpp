#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
	cin>>n>>k;
	
	if(k>=n*10 && k<=n*12){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	cout<<endl;
	
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

