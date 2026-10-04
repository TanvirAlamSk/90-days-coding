#include<bits/stdc++.h>
using namespace std;

void solve(){
	set<int>st;
	int ui;
	for(int i=0;i<3;i++){
		cin>>ui;
		st.insert(ui);
	}
	
	if(st.size()==3){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T=1;
	//cin>>T;
	
	while(T--){
		solve();
	}
	return 0;
}

