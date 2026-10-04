#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,m,ui;
	
	cin>>n>>m;
	set<int>st;
	
	for(i=0;i<n;i++){
		cin>>ui;
		st.insert(ui);
	}
	
	cout<<m-(int)st.size()<<endl;
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




