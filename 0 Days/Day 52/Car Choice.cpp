#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long x1,y1,x2,y2,l1,l2;	
	cin>>x1>>x2>>y1>>y2;
	
	l1=x1*y2;
	l2=x2*y1;
	
	if(l1>l2){
		cout<<-1<<endl;
	}else if(l1<l2){
		cout<<1<<endl;
	}else{
		cout<<0<<endl;
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


