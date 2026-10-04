#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n1,n2;
	cin>>n1>>n2;
	
	if(n1>n2){
		cout<<n1-n2;
	}else{
		cout<<n1+n2;
	}
	cout<<endl;
	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	//int T;
	//cin>>T;
	//while(T--){
		solve();
	//}
}


