#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	
	cin>>a>>b;
	
	float ans1,ans2;
	
	ans1=sqrt(b*b-a*a);
	ans2=sqrt(a*a+b*b);
	
	
	cout<<fixed<<setprecision(4)<<ans1<<" "<<ans2<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	
	while(T--){
		solve();
	}
	
	return 0;
}


