#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,y;
	long long x;
	cin>>x>>y;
	
	for(i=0;i<y;i++){
		if(x>1000){
			x*=2;
		}else{
			x+=1000;
		}
	}
	cout<<x<<"\n";
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


