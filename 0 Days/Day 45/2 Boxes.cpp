#include <bits/stdc++.h>
using namespace std;

void solve(){
	int x,y,k,a,c,b,ans;
	
	cin>>x>>y>>k;
	
	a=x%2,b=y%2,c=k%2;
	
	if((a==b && c==1)||(a!=b && c==0)){
		cout<<-1<<endl;
	}else{
		ans=abs(x-y);
		cout<<abs(ans-k)/2<<endl;
	}
	
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





