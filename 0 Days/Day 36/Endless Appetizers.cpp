#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y,r,es;
    cin>>x>>y>>r;

     es = R / 30;
    int total_sticks = X + es;

    int max_plates = (total_sticks + Y - 1) / Y;

    cout << max_plates << endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--){
		solve();
	}
}





