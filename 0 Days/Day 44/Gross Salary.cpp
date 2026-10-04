#include<bits/stdc++.h>
using namespace std;

void solve(){
	int s;
	cin>>s;
	double ans;
	if(s<1500){
		ans=.1*10*s+s*.1+s*.9;
	}else{
		ans=.1*10*s+500+s*.98;
	}
	
	cout<<fixed<<setprecision(2)<<ans<<endl;
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

