#include<bits/stdc++.h>
using  namespace std;

void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>50){
		cout<<"A"<<endl;
	}else if(b>50){
		cout<<"B"<<endl;
	}else if(c>50){
		cout<<"C"<<endl;
	}else{
		cout<<"NOTA"<<endl;
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

