#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x,y,h;
	cin>>x>>y>>h;
	
	cout<<(x-h+y-1)/y+1<<endl;

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

