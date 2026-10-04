#include<bits/stdc++.h>
using namespace std;

int solve() {
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    
    if(a1+b1<a2+b2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
    
    return 0;
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



