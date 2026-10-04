#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,ans;	
	cin>>a>>b;
	
	ans=(b-a)%3;
	if(ans==1 || ans==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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



