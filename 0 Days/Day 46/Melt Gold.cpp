#include<bits/stdc++.h>
using namespace std;

int solve(){
	int x,y,cnt=0,s=1;
	
	cin>>x>>y;
	
	while(x-y>=s){
		cnt++;
		s+=cnt;
	}
	
	cout<<cnt<<endl;
	return 0;
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

