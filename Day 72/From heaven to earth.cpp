#include<bits/stdc++.h>
using namespace std;

void solve(){
	double n,x,y,l;
	cin>>n>>x>>y;
	l=sqrt(2);
	
	if(n*l/x<=n*2/y){
		cout<<"Stairs\n";
	}else{
		cout<<"Elevator\n";
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
