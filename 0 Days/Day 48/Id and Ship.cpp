#include<bits/stdc++.h>
using namespace std;

void solve(){
	char c;
	cin>>c;
	
	if(c=='b' || c=='B'){
		cout<<"BattleShip"<<endl;
	}else if(c=='c' || c=='C'){
		cout<<"Cruiser"<<endl;
	}else if(c=='d' || c=='D'){
		cout<<"Destroyer"<<endl;
	}else if(c=='f' || c=='F'){
		cout<<"Frigate"<<endl;
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



