#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,ui;	
	cin>>n;
	set<int>st;
	
	for(i=0;i<n;i++){
		cin>>ui;
		st.insert(ui);
	}
	
	if(st.size()>1){
		cout<<2<<endl;
	}else{
		cout<<-1<<endl;
	}
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

