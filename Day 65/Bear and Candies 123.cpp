#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,L=1,B=2;
	cin>>a>>b;
	
	while(1){
		if(a<L){
			cout<<"Bob\n";
			return;
		}else{
			a-=L;
			L+=2;
		}
		
		if(b<B){
			cout<<"Limak\n";
			return;
		}else{
			b-=B;
			B+=2;
		}
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
}



