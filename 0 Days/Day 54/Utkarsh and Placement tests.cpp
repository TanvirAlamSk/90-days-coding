#include<bits/stdc++.h>
using namespace std;

void solve(){
    char a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    
    if(a==x || a==y){
		cout<<a;
	}else if(b==x || b==y){
		cout<<b;
	}else{
		cout<<c;
	}
	cout<<"\n";
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





