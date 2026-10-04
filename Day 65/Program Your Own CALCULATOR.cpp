#include<bits/stdc++.h>
using namespace std;

void solve(){
	double a,b;
	char ch;
	cin>>a>>b>>ch;
	
	if(ch=='+'){
		cout<<a+b;
	}else if(ch=='-'){
		cout<<a-b;
	}else if(ch=='*'){
		cout<<a*b;
	}else{
		cout<<fixed<<setprecision(8)<<(float)a/b;
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T=1;
	//cin>>T;
	while(T--){
		solve();
	}
}




