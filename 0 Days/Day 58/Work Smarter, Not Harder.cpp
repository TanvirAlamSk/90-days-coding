#include<bits/stdc++.h>
using namespace std;

void solve(){
	int l,v1,v2,t1,t2;
	cin>>l>>v1>>v2;
	
	t1=(l+v1-1)/v1;
	t2=(l+v2-1)/v2;
	
	if(t1==t2){
		cout<<-1<<"\n";
		return;
	}
	
	cout<<t1-t2-1<<"\n";
	
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
