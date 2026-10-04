#include<bits/stdc++.h>
using namespace std;

void solve(){
	int i,n,b=0,g=0,cnt=0;
	string st;
	cin>>n>>st;
	
	for(i=0;i<n;i++){
		if(b>2*g){
			break;
		}
		if(st[i]=='B'){
			b++;
			cnt++;
		}else{
			g++;
			cnt++;
		}
	}
	
	cout<<cnt<<endl;
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




