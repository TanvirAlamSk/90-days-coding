#include<bits/stdc++.h>
using namespace std;


int solve() {
	int x,y;
    cin>>x>>y;
    
    if((x+y)%2==0){
		cout<<"Janmansh"<<endl;
	}else{
		cout<<"Jay"<<endl;
	}
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    
    while(T--){
        solve();
    }

    return 0;
}



